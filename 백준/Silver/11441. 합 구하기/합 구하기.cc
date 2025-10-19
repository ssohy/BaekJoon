#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N = 0, M = 0, i = 0, j = 0;
    cin >> N;
    vector<int> arr(N);
    for(int k = 0; k < N; k++){
      cin >> arr[k];
    }
    cin >> M;
    while(M--){
      int sum = 0;
      cin >> i >> j;
      
      for(int k = i; k <= j; k++){
        sum += arr[k-1];
      }
      cout << sum << '\n';
    }
    
    return 0;
}