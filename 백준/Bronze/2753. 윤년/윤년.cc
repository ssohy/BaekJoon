#include <iostream>
using namespace std;

int main()
{
    int N = 0;

    cin >> N;
    if(N % 4 == 0) {
        if(N % 400 == 0){
            cout << 1 << endl;
        }
        else if(N % 100 != 0){
            cout << 1 << endl;
        }
        else{
            cout << 0 << endl;
        }
    }
    else {
        cout << 0 << endl;
    }
    return 0;
}
