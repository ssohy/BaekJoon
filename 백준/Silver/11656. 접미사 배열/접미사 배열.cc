#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    string S = "";
    int size = 0;
    vector<string> str;
    cin >> S;
    size = S.length();
    for(int i = 0; i < size; i++){
        str.push_back(S);
        S.erase(0,1);
    }
    sort(str.begin(), str.end());
    for(int i = 0; i < size; i++){
        cout << str[i] << endl;
    }
    return 0;
}