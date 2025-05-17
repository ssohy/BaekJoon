#include <iostream>
using namespace std;

int main() 
{
    int T = 0, a = 0, b = 0;
    cin >> T;
    for(int i = 1; i <= T; i++){
      cin >> a >> b;
      cout << "Case " << i << ": " << a + b << '\n';
    }
    return 0;
}