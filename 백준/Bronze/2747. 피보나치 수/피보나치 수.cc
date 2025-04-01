#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int n = 0;
    vector<int> fib;
    fib.push_back(0);
    fib.push_back(1);
    cin >> n;
    
    if(n >= 2){
      for(int i = 2; i <= n; i++){
        fib.push_back(fib[i-2]+fib[i-1]);
      }
    }
    cout << fib[n];
    return 0;
}