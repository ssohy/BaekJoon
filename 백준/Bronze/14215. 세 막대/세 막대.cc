#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int tmp = 0, sum = 0;
    vector<int> arr;
    for(int i = 0; i < 3; i++){
        cin >> tmp;
        arr.push_back(tmp);
    }
    
    sort(arr.begin(), arr.end());
    
    sum = arr[0] + arr[1];
    while(sum <= arr[2]){
        arr[2]--;
    }
    
    cout << sum + arr[2] << '\n';
    
    return 0;
}