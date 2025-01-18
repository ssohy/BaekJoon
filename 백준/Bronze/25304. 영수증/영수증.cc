#include <iostream>
using namespace std;

int main()
{
    int X = 0, N = 0, a = 0, b = 0, sum = 0;
    
    cin >> X >> N;
    
    while(N--){
        cin >> a >> b;
        sum += (a * b);
    }
    
    if(X == sum)
        cout << "Yes\n";
    else
        cout << "No\n";
        
    return 0;
}
