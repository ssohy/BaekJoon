#include <iostream>
using namespace std;

int main()
{
    int H = 0, M = 0, tmp = 0;
    cin >> H >> M;
    
    if(M >= 45){
        M = M - 45;
    }
    else{
        tmp = 45 - M;
        M = 60 - tmp;
        if(H == 0){
            H = 23;
        }
        else{
            H = H - 1;
        }
        
    }
    
    
    cout << H << " " << M;
    return 0;
}