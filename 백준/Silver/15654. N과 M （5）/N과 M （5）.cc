#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int N, M;
vector<int> arr, result;
vector<bool> visited;

void dfs()
{
  if(result.size() == M){
    for(int i = 0; i < M; i++){
      cout << result[i] << (i == M - 1 ? '\n' : ' ');
    }
    return;
  }
  
  for(int i = 0; i < N; i++){
    if(!visited[i]){
      visited[i] = true;
      result.push_back(arr[i]);
      dfs();
      result.pop_back();
      visited[i] = false;
    }
  }
}

int main() 
{
    int tmp = 0;
    cin >> N >> M;
    visited.assign(N+1, false);
    for(int i = 0; i < N; i++){
      cin >> tmp;
      arr.push_back(tmp);
    }
    sort(arr.begin(), arr.end());
    dfs();
    return 0;
}