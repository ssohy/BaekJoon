#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int n = 0;
    cin >> n;
    vector<int> fib(n+1);
    fib[0] = 0; fib[1] = 1;
    for(int i = 2; i <= n; i++){
      fib[i] = fib[i - 2] + fib[i - 1];
    }
    cout << fib[n];
    return 0;
}