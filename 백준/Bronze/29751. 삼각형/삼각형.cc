#include <iostream>
using namespace std;

int main() 
{
    float w = 0, h = 0;
    cin >> w >> h;
    cout << fixed;
    cout.precision(1);
    cout << w * h / 2;
    return 0;
}