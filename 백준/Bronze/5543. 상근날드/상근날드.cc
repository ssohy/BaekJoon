#include <iostream>
using namespace std;

int main()
{
    int tmp = 0, minHam = 2000, minDrin = 2000;
    for(int i = 0; i < 3; i++){
        cin >> tmp;
        if(tmp < minHam)
            minHam = tmp;
    }
    for(int i = 0; i < 2; i++){
        cin >> tmp;
        if(tmp < minDrin)
            minDrin = tmp;
    }
    cout << minHam + minDrin - 50;

    return 0;
}