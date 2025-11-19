#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int T = 0, caseNum = 0, curCnt = 1, maxCnt = 0, maxNum = 0;
    cin >> T;
    while(T--){
      int score[1000] = {0}; maxCnt = 0; maxNum = 0; curCnt = 1;
      cin >> caseNum;
      for(int i = 0; i < 1000; i++){
        cin >> score[i];
      }
      sort(score, score+1000);
      for(int i = 1; i < 1000; i++){
        if(score[i-1] == score[i]){
          curCnt++;
        } else{
          if(maxCnt <= curCnt){
            maxCnt = curCnt;
            maxNum = score[i-1];
          }
          curCnt = 1;
        }
      }
      if(maxCnt <= curCnt){
          maxCnt = curCnt;
          maxNum = score[999];
      }
      
      cout << "#" << caseNum << " "<< maxNum << '\n';
    }
    return 0;
}