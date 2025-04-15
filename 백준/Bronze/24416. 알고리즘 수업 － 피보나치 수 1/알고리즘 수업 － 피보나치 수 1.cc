#include <iostream>
using namespace std;

int recurCnt = 0, dynamicCnt = 0;

int fib(int n){
  if(n == 1 || n == 2){
    recurCnt++;
    return 1;
  }
    
  else {
    return (fib(n-1)+fib(n-2));
  }
}

void fibonacci(int n){
  for(int i = 3; i <= n; i++){
    dynamicCnt++;
  }
}

int main() 
{
    int n = 0;
    cin >> n;
    fib(n);
    fibonacci(n);
    cout << recurCnt << " " << dynamicCnt;
    return 0;
}