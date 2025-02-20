#include <iostream>
using namespace std;

int main()
{
    int N = 0, tmp = 0;
    int arr[2] = {0};
    cin >> N;
    while(N--){
        cin >> tmp;
        arr[tmp]++;
    }
    if(arr[0] > arr[1]) 
        cout <<  "Junhee is not cute!";
    else 
        cout << "Junhee is cute!";
    
    return 0;
}