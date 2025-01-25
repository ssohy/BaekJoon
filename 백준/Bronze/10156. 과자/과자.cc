#include <iostream>
using namespace std;

int main()
{
    int K = 0, N = 0, M = 0;
    cin >> K >> N >> M;
    
    if(K * N > M)
        cout << K * N - M;
    else
        cout << 0;

    return 0;
}
