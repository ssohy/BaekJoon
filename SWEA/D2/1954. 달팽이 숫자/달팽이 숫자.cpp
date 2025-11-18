#include <iostream>
#include <vector>
using namespace std;

void makeSnail(vector<vector<int>>& snail, int n)
{
    int curNum = 1, r = 0, c = 0;
    int dir = 0; // 현재 방향 (0:우, 1:하, 2:좌, 3:상)
    while(curNum <= n*n){
      snail[r][c] = curNum;
      curNum++;
      
      if(dir == 0){ // 우측
        if(c == n-1 || snail[r][c+1] != 0){
          dir = 1;
          r++;
        } else c++;
      }else if(dir == 1){ // 아래
        if(r == n-1 || snail[r+1][c] != 0){
          dir = 2;
          c--;
        } else r++;
      }else if(dir == 2){ // 좌측 
        if(c < 1 || snail[r][c-1] != 0){
          dir = 3;
          r--;
        } else c--;
      }else{ // 위
        if(r < 1 || snail[r-1][c] != 0){
          dir = 0;
          c++;
        } else r--;
      }
    }
    
}


int main() 
{
    int T = 0, N = 0;
    cin >> T;
    for(int i = 1; i <= T; i++) {
      cin >> N;
      vector<vector<int>> snail(N, vector<int>(N, 0));
      makeSnail(snail, N);
      
      cout << "#" << i << '\n';
      for(int j = 0; j < N; j++){
        for(int k = 0; k < N; k++){
          cout << snail[j][k] << " ";
        }
        cout << '\n';
      }
    }
    
    return 0;
}