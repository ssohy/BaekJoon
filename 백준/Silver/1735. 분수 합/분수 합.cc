#include <iostream>
#include <numeric>
using namespace std;

int main() 
{
    int A = 0, B = 0, a = 0, b = 0, resultA = 0, resultB = 0, g = 0;
    cin >> A >> B >> a >> b;
    resultA = A*b + B*a;
    resultB = B*b;
    g = gcd(resultA, resultB);
    cout << resultA / g << " " << resultB / g << '\n';
    return 0;
}