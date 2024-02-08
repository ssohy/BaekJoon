#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N = 0, tmp = 0;
    vector<int> arr;
    cin >> N;
    while(N--){
        cin >> tmp;
        arr.push_back(tmp);
    }
    sort(arr.begin(), arr.end());
    for(int i = 0; i < arr.size(); i++)
        cout << arr[i] << '\n';
    return 0;
}