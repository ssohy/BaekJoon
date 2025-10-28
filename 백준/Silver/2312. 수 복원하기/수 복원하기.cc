#include <iostream>
using namespace std;

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 0, N = 0, n = 0, cnt = 0;
    cin >> T;
    while(T--){
      cin >> N;
      n = N;
      for(int i = 2; i <= N; i++){
        cnt = 0;
        while(n % i == 0){
          cnt++;
          n /= i;
        }
        if(cnt != 0)
          cout << i << " " << cnt << '\n';
      }
    }
    return 0;
}