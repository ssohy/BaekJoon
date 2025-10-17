#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> arr, resultArr;
vector<bool> visited;
int N, M;
void dfs()
{
  if(resultArr.size() == M){
    for(int j = 0; j < M; j++)
      cout << resultArr[j] << (j == M - 1 ? '\n' : ' ');
    return;
  }
  for(int j = 0; j < N; j++){
    if(!visited[j]){
      if(resultArr.empty() || resultArr.back() < arr[j]){
        visited[j] = true;
        resultArr.push_back(arr[j]);
        dfs();
        resultArr.pop_back();
        visited[j] = false;
      }
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