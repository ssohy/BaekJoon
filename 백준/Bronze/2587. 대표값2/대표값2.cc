#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
    int tmp = 0, sum = 0;
    vector<int> arr;
    for(int i = 0; i < 5; i++){
      cin >> tmp;
      sum += tmp;
      arr.push_back(tmp);
    }
    sort(arr.begin(), arr.end());
    cout << sum / 5 << '\n' << arr[2];
    return 0;
}