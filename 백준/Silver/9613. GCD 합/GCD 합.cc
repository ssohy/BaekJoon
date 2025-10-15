#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() 
{
    int t = 0, n = 0;
    cin >> t;
    while(t--){
      cin >> n;
      vector<int> arr(n);
      long long sum = 0;
      for(int i = 0; i < n; i++){
        cin >> arr[i];
      }
      for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
          sum += gcd(arr[i], arr[j]);
        }
      }
      cout << sum << '\n';
    }
    return 0;
}