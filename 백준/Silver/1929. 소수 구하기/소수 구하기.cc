#include <iostream>
using namespace std;

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int M = 0, N = 0;
    bool isPrime = true;
    cin >> M >> N;

    for(int num = M; num <= N; num++){
      if(num < 2) continue;
      
      isPrime = true;
      for(int i = 2; i * i <= num; i++){
        if(num % i == 0){
          isPrime = false;
          break;
        }
      }
      if(isPrime) cout << num << '\n';
    }
    return 0;
}