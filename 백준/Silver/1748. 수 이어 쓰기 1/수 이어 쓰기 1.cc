#include <iostream>
using namespace std;

int main()
{
    int N = 0, num = 0;
    cin >> N;
    if(N < 10){
        cout << N << '\n';
    }
    else{
        for(int i = 1; i <= N; i *= 10)
            num += N - i + 1;
        cout << num << '\n';
    }
    
    return 0;
}