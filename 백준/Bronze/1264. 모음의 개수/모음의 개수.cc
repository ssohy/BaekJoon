#include <iostream>
#include <istream>
using namespace std;

int main()
{
    string s = "";
    int cnt = 0;
    while(s != "#"){
        getline(cin, s);
        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || 
            s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
                cnt++;
        }
        if(s != "#")
            cout << cnt << "\n";
        cnt = 0;
    }

    return 0;
}