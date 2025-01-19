#include <iostream>
using namespace std;

int main()
{
    string S = "";
    int alphabet[26] = {0};
    cin >> S;
    for(int i = 0; i < S.length(); i++){
        alphabet[S[i] - 'a']++;
    }
    for(int i = 0; i < 26; i++){
        cout << alphabet[i] << " ";
    }
    return 0;
}