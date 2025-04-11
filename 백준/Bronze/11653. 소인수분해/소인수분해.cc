#include <iostream>
using namespace std;

int main() 
{
    int originalN = 0, N = 0;
    cin >> N;
    originalN = N;
    
    for(int i = 2; i <= originalN; i++){
      while(N % i == 0){
        cout << i << '\n';
        N /= i ;
      }
    }
    return 0;
}