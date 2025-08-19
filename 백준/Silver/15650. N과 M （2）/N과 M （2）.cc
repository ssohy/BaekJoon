#include <iostream>
#include <vector>
using namespace std;
int N, M;
vector<int> arr;

void dfs()
{
  if(arr.size() == M){
    for(int i = 0; i < M; i++)
      cout << arr[i] << (i == M - 1 ? '\n' : ' ');
    return;
  }
  
  for(int i = 1; i <= N; i++){
    if (arr.empty() || arr.back() < i) { // 오름차순 체크
        arr.push_back(i);
        dfs();
        arr.pop_back();
    }
  }
}


int main() 
{
    cin >> N >> M;
    dfs();
    return 0;
}