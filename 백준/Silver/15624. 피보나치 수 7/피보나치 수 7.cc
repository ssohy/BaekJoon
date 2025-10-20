#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    long long n = 0, mod = 1000000007;
    cin >> n;
    vector<long long> fib(n+1, 0);
    fib[0] = 0; fib[1] = 1;
    
    if(n < 2){
      cout << fib[n];
      return 0;
    }
    
    for(long long i = 2; i <= n; i++){
      fib[i] = (fib[i-1] + fib[i-2]) % mod;
    }
    
    cout << fib[n] << '\n';
    return 0;
}