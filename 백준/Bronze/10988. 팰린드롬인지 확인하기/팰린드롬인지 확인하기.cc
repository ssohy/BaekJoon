#include <iostream>
using namespace std;

int main()
{
    int size = 0;
    string str = "";
    bool isPalindrome = true;
    cin >> str;
    
    size = str.length();
    for(int i = 0, j = size - 1; i < size / 2, j >= size / 2; i++, j--){
        if(str[i] != str[j]){
            isPalindrome = false;
            break;
        }

    }
    if(isPalindrome) 
        cout << 1;
    else 
        cout << 0;
        
    return 0;
}