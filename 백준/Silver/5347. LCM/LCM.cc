#include <iostream>
#include <numeric>
using namespace std;

int main() 
{
    int n = 0;
    long long a = 0, b = 0;
    cin >> n;
    while(n--){
      cin >> a >> b;
      cout << lcm(a, b) << '\n';
    }
    return 0;
}