#include <iostream>
using namespace std;

int main()
{
    int sum = 0, tmp = 0, cum = 0;
    cin >> sum;
    for(int i = 0; i < 9; i++){
        cin >> tmp;
        cum += tmp;
    }
    cout << sum - cum;
    return 0;
}
