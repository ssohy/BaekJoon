#include <iostream>
using namespace std;

int main()
{
    string str = "";
    int size = 0, cnt = 0;
    cin >> str;
    size = str.length();
    for(int i = 0; i < size; i++){
        if(str[i] >= 'A' && str[i] <= 'C')
            cnt += 3;
        if(str[i] >= 'D' && str[i] <= 'F')
            cnt += 4;
        if(str[i] >= 'G' && str[i] <= 'I')
            cnt += 5;
        if(str[i] >= 'J' && str[i] <= 'L')
            cnt += 6;
        if(str[i] >= 'M' && str[i] <= 'O')
            cnt += 7;
        if(str[i] >= 'P' && str[i] <= 'S')
            cnt += 8;
        if(str[i] >= 'T' && str[i] <= 'V')
            cnt += 9;
        if(str[i] >= 'W' && str[i] <= 'Z')
            cnt += 10;
    }
    cout << cnt;
    return 0;
}