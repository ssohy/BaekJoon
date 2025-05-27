#include <iostream>
#include <cctype>
using namespace std;

int main() 
{
    int i = 0;
    string s = "";
    cin >> i;
    while(i--){
      cin >> s;
      for(int i=0; i  < s.length(); i++){
        if(isupper(s[i]))
          s[i] = tolower(s[i]);
      }
      cout << s << '\n';
    }
    return 0;
}