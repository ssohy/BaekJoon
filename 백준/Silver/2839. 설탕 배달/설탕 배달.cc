#include <iostream>
using namespace std;
int main()
{
    int N = 0, cnt = 0, tmp = 0;
    cin >> N;
    while(N >= 0){
        if(N % 5 == 0){
            cnt += (N / 5);
            cout << cnt << endl;
            return 0;
        }
        N -= 3;
        cnt++;
    }
    cout << -1 << endl;
    return 0;
}