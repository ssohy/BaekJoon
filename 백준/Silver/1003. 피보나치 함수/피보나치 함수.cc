#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int T = 0, N = 0, cnt0 = 0, cnt1 = 0;
    
    cin >> T;
    while(T--){
      vector<pair<int, int>> fib;
      fib.push_back(make_pair(1, 0));
      fib.push_back(make_pair(0, 1));
      cin >> N;
      if(N == 0){
        cnt0 = 1;
      }
      else if(N == 1){
        cnt1 = 1;
      }
      else{
        for(int i = 2; i <= N; i++){
          fib.push_back(make_pair(fib[i-2].first+fib[i-1].first, fib[i-2].second+fib[i-1].second));
        }
        cnt0 = fib[N].first;
        cnt1 = fib[N].second;
      }
      cout << cnt0 << " " << cnt1 << '\n';
      cnt0 = 0;
      cnt1 = 0;
    }
    
    return 0;
}