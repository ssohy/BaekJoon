#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int N = 0, cnt = 0, widthCnt = 0, heightCnt = 0;
    vector<string> room;
    string tmp = "";
    cin >> N;
    
    
    for(int i = 0; i < N; i++){
      cin >> tmp;
      room.push_back(tmp);
    }
    for(int i = 0; i < N; i++){ // 가로체크
      cnt = 0;
      for(int j = 0; j < N; j++){
        if(room[i][j] == '.')
          cnt++;
        else {
          if(cnt >= 2) widthCnt++;
          cnt = 0;
        }
        
      }
      if(cnt >= 2)
          widthCnt++;
    }
    
    for(int i = 0; i < N; i++){ // 세로체크
      cnt = 0;
      for(int j = 0; j < N; j++){
        if(room[j][i] == '.')
          cnt++;
        else {
          if(cnt >= 2) heightCnt++;
          cnt = 0;
        }
        
      }
      if(cnt >= 2)
          heightCnt++;
    }
    
    cout << widthCnt << " " << heightCnt;
    return 0;
}