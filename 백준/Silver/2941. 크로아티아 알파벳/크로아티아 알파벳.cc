#include <iostream>
using namespace std;

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int cnt = 0;
    string str = "", tmp = "";
    string croatia[7] = {"c=", "c-", "d-", "lj", "nj", "s=", "z="};
    bool isCroatia = false;
    cin >> str;
    for(int i = 0; i < str.length(); i++){
      // 변수 초기화 
      isCroatia = false;
      tmp = "";
      // 배열 안 크로아티아 알파벳일 시
      if(i < str.length() - 1){
        tmp += str[i];
        tmp += str[i+1];
      }
      for(int j = 0; j < sizeof(croatia)/sizeof(string); j++){
        if(tmp == croatia[j]){
          cnt++;
          i++;
          isCroatia = true;
          break;
        }
      }
      // "dz=" 크로아티아 알파벳일 시
      if(i < str.length() - 2){
        if(str[i] == 'd'&&str[i+1] == 'z'&&str[i+2] == '='){
          cnt++;
          i += 2;
          isCroatia = true;
        }
      }
      // 배열 안, dz= 크로아티아 알파벳 X일 시
      if(!isCroatia)
        cnt++;
    }
    cout << cnt;
    return 0;
}