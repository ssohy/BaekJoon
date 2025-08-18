#include <iostream>
using namespace std;

int bingo[5][5] = {0};
int result = 0;

void checking(int n)
{
    for(int i = 0; i < 5; i++){
      for(int j = 0; j < 5; j++){
        if(n == bingo[i][j]){
          bingo[i][j] = 0;
        }
      }
    }
}

bool isBingo()
{
    int sum = 0, result = 0;
    // 가로 체크 
    for(int i = 0; i < 5; i++){ 
      for(int j = 0; j < 5; j++){
        sum += bingo[i][j];
      }
      if(sum == 0) {
        result++;
      }
      sum = 0;
    }
    // 세로 체크
    for(int i = 0; i < 5; i++){ 
      for(int j = 0; j < 5; j++){
        sum += bingo[j][i];
      }
      if(sum == 0) {
        result++;
      }
      sum = 0;
    } 
    
    // 대각선 체크
    sum += (bingo[0][0] + bingo[1][1] + bingo[2][2] + bingo[3][3] + bingo[4][4]);
    if(sum == 0) {
        result++;
      }
    sum = 0;
    sum += (bingo[4][0] + bingo[3][1] + bingo[2][2] + bingo[1][3] + bingo[0][4]);
    if(sum == 0) {
        result++;
    }
    if(result >= 3) 
      return true;
    else
      return false;
}

int main() 
{
    int num = 0;

    for(int i = 0; i < 5; i++){
      for(int j = 0; j < 5; j++){
        cin >> bingo[i][j];
      }
    }
    
    for(int i = 0; i < 25; i++){
      cin >> num;
      checking(num);
      if(isBingo()) {
        cout << i + 1 << '\n';
        break;
      }
    }
    return 0;
}