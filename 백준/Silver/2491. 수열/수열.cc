#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int N = 0, maxcnt = 1, up = 1, maxcnt2 = 1, down = 1;
    cin >> N;
    vector<int> arr(N);
    for(int i = 0; i < N; i++){
      cin >> arr[i];
    }
    for(int i = 0; i < N; i++){ 
      if(i <= N - 2){ // 오름차순 체크
        if(arr[i] <= arr[i+1]){
          up++;
        }
        else{
          if(maxcnt < up)
            maxcnt = up;
          up = 1;
        }
      }
      
      if(i <= N - 2){ // 내름차순 체크
        if(arr[i] >= arr[i+1])
          down++;
        else{
          if(maxcnt2 < down)
            maxcnt2 = down;
          down = 1;
        }
      }
    }
    if(maxcnt < up)
      maxcnt = up;
    if(maxcnt2 < down)
      maxcnt2 = down;
    cout << (maxcnt > maxcnt2 ? maxcnt: maxcnt2) << '\n';
    return 0;
}