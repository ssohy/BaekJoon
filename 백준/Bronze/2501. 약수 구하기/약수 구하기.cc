#include <iostream>
using namespace std;

int main()
{
    int N = 0, K = 0, cnt = 0;
    cin >> N >> K;
    for(int i = 1; i <= N; i++){
        if(N % i == 0)
            cnt++;
        if(cnt == K) {
            cout << i;
            return 0;
        }
    }
    if(cnt < K) cout << 0;
    
    return 0;
}
