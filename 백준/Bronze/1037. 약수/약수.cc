#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
    int N = 0, tmp = 0;
    vector<int> arr;
    cin >> N;
    while(N--){
      cin >> tmp;
      arr.push_back(tmp);
    }
    sort(arr.begin(), arr.end());
    cout << arr[0] * arr[arr.size() - 1];
    return 0;
}