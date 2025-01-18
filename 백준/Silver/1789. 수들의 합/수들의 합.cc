#include <iostream>
using namespace std;

int main()
{
    long long S = 0, N = 0;
    cin >> S;
    
    while(S > 0){
        N++;
        S = S - N;
    }
    if(S < 0)
        N--;
    
    cout << N;
    
    return 0;
}
