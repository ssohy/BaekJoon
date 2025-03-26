#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int nine[9], seven[7], sum = 0, tmp = 0;
    for(int i = 0; i < 9; i++)
      cin >> nine[i];
    // 0~8 중 숫자 2개 뽑기 8C2
    for(int i = 0; i < 8; i++){
      for(int j = i + 1; j < 9; j++){
        tmp = 0, sum = 0;
        for(int k = 0; k < 9; k++){
          if(i != k && j != k){
            seven[tmp++] = nine[k];
            sum += nine[k];
          }
        }
        if(sum == 100) break;
      }
      if(sum == 100) break;
    }
    sort(seven, seven + 7);
    for(int i = 0; i < 7; i++)
      cout << seven[i] << '\n';
    return 0;
}