#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
    int N = 0, tmp = 0;
    vector<pair<int, int>> arr; // idx, value
    cin >> N;
    vector<int> arr2(N);
    for(int i = 0; i < N; i++){
      cin >> tmp;
      arr.push_back(make_pair(tmp, i));
    }
    sort(arr.begin(), arr.end());
    for(int i = 0; i < N; i++){
      arr2[arr[i].second] = i;
    }
    
    for(int i = 0; i < N; i++){
      cout << arr2[i] <<  " ";
    }
    return 0;
}