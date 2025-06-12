#include <iostream>
using namespace std;

int main() 
{
    int a = 0, b = 0;
    while(true){
      cin >> a >> b;
      if(a == 0 && b == 0) break;
      cout << ((a > b) ? "Yes" : "No") << '\n';
    }
    return 0;
}