#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int T = 0, N = 0, M = 0, maxKill = 0, curKill = 0; 
    cin >> T;
    for(int testCase = 1; testCase <= T; testCase++){
      cin >> N >> M;
      maxKill = 0; curKill = 0;
      vector<vector<int>> arr(N, vector<int>(N, 0));
      
      for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++)
          cin >> arr[i][j];
      }
      
      for(int i = 0; i < N-M+1; i++){
        for(int j = 0; j < N-M+1; j++){
          int cnt = 0;
          for(int r = i; r < i+M; r++){
            for(int c = j; c < j+M; c++){
              curKill += arr[r][c];
            }
          }
          if(curKill > maxKill){
            maxKill = curKill;
          }
          curKill = 0;
        }
      }
      
      cout << "#" << testCase << " " << maxKill << '\n';
    }
    return 0;
}