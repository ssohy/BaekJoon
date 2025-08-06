#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int N = 0, maxcnt = 1, cnt = 1, maxcnt2 = 1;
    cin >> N;
    vector<int> arr(N);
    for(int i = 0; i < N; i++){
      cin >> arr[i];
    }
    for(int i = 0; i < N; i++){ // 오름차순 체크
      if(i <= N - 2){
        if(arr[i] <= arr[i+1]){
          cnt++;
        }
        else{
          if(maxcnt < cnt)
            maxcnt = cnt;
          cnt = 1;
        }
      }
    }
    if(maxcnt < cnt)
      maxcnt = cnt;
    cnt = 1;
    for(int i = 0; i < N; i++){ // 내림차순 체크
      if(i <= N - 2){
        if(arr[i] >= arr[i+1])
          cnt++;
        else{
          if(maxcnt2 < cnt)
            maxcnt2 = cnt;
          cnt = 1;
        }
      }
    }
    if(maxcnt2 < cnt)
      maxcnt2 = cnt;

    cout << (maxcnt > maxcnt2 ? maxcnt: maxcnt2) << '\n';
    return 0;
}