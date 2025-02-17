#include <iostream>
using namespace std;

int main()
{
    long long n = 0, result = 0;
    cin >> n;
    result += n;
    while(n--){
        result += 3; 
    }
    cout << result;
    return 0;
}