#include <iostream>
using namespace std;

int main() 
{
    int T = 0;
    string str = "", rts = "";
    
    cin >> T;
    cin.ignore();
    while(T--){
      getline(cin, str);

      for(int i = 0; i < str.length(); i++){
        if(str[i] != ' '){
          rts += str[i];
        }
        else {
          for(int j = rts.length() - 1; j >= 0; j--)
            cout << rts[j];
          cout << " ";
          rts = "";
        }
      }
      
      for(int j = rts.length() - 1; j >= 0; j--)
        cout << rts[j];
      
      cout << '\n';
      str = "";
      rts = "";
    }
    return 0;
}