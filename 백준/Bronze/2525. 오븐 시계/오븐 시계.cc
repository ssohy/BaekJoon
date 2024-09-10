#include <iostream>
using namespace std;

int main()
{
    int A = 0, B = 0, C = 0, tmp = 0;
    cin >> A >> B >> C;
    
    if(B + C < 60){
        B = B + C;
    }
    else{
        tmp = (B + C) / 60;
        B = (B + C) % 60;
        A += tmp;
        if(A >= 24){
            A = A - 24;
        }
    }
    
    cout << A << " " << B;
    return 0;
}