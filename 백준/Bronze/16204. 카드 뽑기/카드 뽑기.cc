#include <iostream>
using namespace std;

int main() 
{
    int N = 0, M = 0, K = 0, result = 0;
    cin >> N >> M >> K;
    result =  min(M, K) + min(N - M, N - K);
    cout << result;
    return 0;
}