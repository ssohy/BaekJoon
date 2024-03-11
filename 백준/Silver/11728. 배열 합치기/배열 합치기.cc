#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int N = 0, M = 0, tmp = 0;
    vector<int> arr;
    cin >> N >> M;
    for(int i = 0; i < N + M; i++){
        cin >> tmp;
        arr.push_back(tmp);
    }
    sort(arr.begin(), arr.end());
    for(int i = 0; i < N + M; i++){
        cout << arr[i] << " ";
    }
    return 0;
}