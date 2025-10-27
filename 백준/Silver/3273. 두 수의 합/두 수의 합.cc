#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n = 0, x = 0, sum = 0, cnt = 0;
    cin >> n;
    vector<int> arr(n);
    int start = 0, end = n-1;
    for(int i = 0; i < n; i++){
      cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    cin >> x;
    // for(int i = 0; i < n; i++){
    //   cout << arr[i] << " ";
    // }
    // cout << endl;
    while(start < end){
      sum = arr[start] + arr[end];
      if (sum == x){
          cnt++;
          start++;
      }
      else if(sum < x)
          start++;
      else
          end--;
    }
    cout << cnt << '\n';
    return 0;
}