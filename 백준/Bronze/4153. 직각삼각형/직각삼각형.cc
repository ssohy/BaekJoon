#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a = -1, b = -1, c = -1;
    int arr[3];
    while(true){
        cin >> arr[0] >> arr[1] >> arr[2];
        sort(arr, arr + 3);
        a = arr[0]; b = arr[1]; c =arr[2];
        
        if(a == 0 && b == 0 && c == 0) break;
        
        if((a * a + b * b) == c * c)
            cout << "right\n";
        else
            cout << "wrong\n";
    }

    return 0;
}