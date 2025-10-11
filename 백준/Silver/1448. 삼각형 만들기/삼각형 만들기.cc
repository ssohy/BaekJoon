#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
    int N = 0, a = 0, b = 0, c = 0;
    cin >> N;
    vector<int> straw(N);
    for(int i = 0; i < N; i++){
      cin >> straw[i];
    }
    sort(straw.begin(), straw.end());
    if(N == 3){
      a = straw[0];
      b = straw[1];
      c = straw[2];
    }else{
      for(int i = N - 1; i >= 2; i--){
        a = straw[i-2];
        b = straw[i-1];
        c = straw[i];
        if(a+b>c) break;
      }
    }
    
    cout << (a + b > c ? a + b + c : -1) << '\n';
    
    return 0;
}