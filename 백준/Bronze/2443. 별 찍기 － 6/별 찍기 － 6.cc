#include <iostream>
using namespace std;

int main()
{
    int N = 0;
    string star, gap = "";
    
    cin >> N;
    for(int i = N; i > 0; i--){
        star = "";
        for(int j = 2*i-1; j > 0; j-- )
            star += "*";
        cout << gap << star << '\n';
        gap += " ";
        
    }

    return 0;
}