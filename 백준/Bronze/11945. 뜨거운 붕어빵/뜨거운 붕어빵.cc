#include <iostream>
using namespace std;

int main()
{
    int N = 0, M = 0;
    string str = "";
    cin >> N >> M;
    while(N--){
        cin >> str;
        for(int i = M - 1; i >= 0; i--)
            cout << str[i];
        cout << '\n';
        str = "";
    }
    return 0;
}