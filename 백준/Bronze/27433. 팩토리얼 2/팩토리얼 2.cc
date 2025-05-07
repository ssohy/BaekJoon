#include <iostream>
using namespace std;

int main() 
{
    int N = 0;
    long long result = 1;
    cin >> N;
    for(int i = 1; i <= N; i++)
      result *= i;
    
    cout << result;
    return 0;
}