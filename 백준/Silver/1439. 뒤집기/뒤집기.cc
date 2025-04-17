#include <iostream>
using namespace std;

int main() 
{
    string S = "";
    int cnt10 = 0, cnt01 = 0;
    cin >> S;
    for(int i = 1; i < S.length(); i++){
      if(S[i - 1] == '0' && S[i] == '1'){
        cnt01++;
      }
      else if(S[i - 1] == '1' && S[i] == '0'){
        cnt10++;
      }
    }
    cout << (cnt10 > cnt01 ? cnt10 : cnt01);
    return 0;
}