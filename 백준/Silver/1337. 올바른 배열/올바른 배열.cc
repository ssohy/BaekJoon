#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
    int N = 0, minCnt = 4, curCnt = 0, need = 0;
    cin >> N;
    vector<int> arr(N);
    for(int i = 0; i < N; i++){
      cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    
    for(int i = 0; i < N; i++){
      curCnt = 0;
      for(int j = i; j < N; j++){
        if(arr[j] <= arr[i] + 4)
          curCnt++;
      }
      need = 5 - curCnt;
      if(need < minCnt){
        minCnt = need;
      }
    }

    
    
    cout << minCnt << '\n';
    return 0;
}