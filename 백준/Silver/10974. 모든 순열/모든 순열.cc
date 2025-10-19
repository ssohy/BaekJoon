#include <iostream>
#include <vector>
using namespace std;
int N;
vector<int> arr;
vector<bool> isVisited;

void dfs()
{
  if(arr.size() == N){
    for(int i = 0; i < N; i++){
      cout << arr[i] << (i < N - 1 ? ' ' : '\n');
    }
    return;
  }
  for(int i = 1; i <= N; i++){
    if(!isVisited[i]){
      arr.push_back(i);
      isVisited[i] = true;
      dfs();
      arr.pop_back();
      isVisited[i] = false;
    }
  }
}

int main() 
{
    cin >> N;
    isVisited.assign(N+1, false);
    dfs();
    return 0;
}