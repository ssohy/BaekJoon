#include <iostream>
using namespace std;
int main()
{
    int A = 0, B = 0, C = 0, tmp = 0, result = 0;
    int arr[10] = {0};
    cin >> A >> B >> C;
    result = A * B * C;
    while(result != 0){
        tmp = result % 10;
        result /= 10;
        arr[tmp]++;
    }
    for(int i = 0; i < 10; i++){
        cout << arr[i] << endl;
    }
    return 0;
}