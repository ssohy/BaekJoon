#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int N = 9, tmp = 0;
    vector<int> arr;
    while(N--){
        cin >> tmp;
        arr.push_back(tmp);
    }
    cout << *max_element(arr.begin(), arr.end())<< endl;
    cout << max_element(arr.begin(), arr.end()) - arr.begin() + 1 << endl;
    return 0;
}