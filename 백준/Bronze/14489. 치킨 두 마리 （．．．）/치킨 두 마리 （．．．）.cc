#include <iostream>
using namespace std;

int main() 
{
    int A = 0, B = 0, C = 0;
    cin >> A >> B >> C;
    if(A + B < C * 2){
      cout << A + B << '\n';
    }
    else{
      cout << (A + B) - C * 2 << '\n';
    }
    return 0;
}