#include <iostream>
#include <numeric>
using namespace std;

int main() 
{
    int T = 0, A = 0, B = 0;
    cin >> T;
    while(T--){
      cin >> A >> B;
      cout << lcm(A, B) << '\n';
    }
    return 0;
}