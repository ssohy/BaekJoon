#include <iostream>
using namespace std;

int main()
{
    int T = 0; 
    string str = "";
    cin >> T;
    while(T--){
        cin >> str;
        cout << str[0] << str[str.length() - 1] << '\n';
    }

    return 0;
}
