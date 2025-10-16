#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int N = 0, cnt = 0, n1 = 0, n2 = 0, result = 0;
    cin >> N;
    vector<int> arr(N, 0);
    cin >> n1 >> n2;
    arr[n1 - 1] = 1;
    arr[n2 - 1] = 1;
    
    while(result != 2){
      for(int i = 0; i < N; i+=2){
        if(i != N - 1){
          arr[i / 2] = arr[i] + arr[i+1];
        } else{
          arr[i / 2] = arr[i];
        }
      }
      if(N % 2 != 0){
        N/=2;
        N++;
      } else N/=2;
      
      for(int i = 0; i < N; i++){
        if(arr[i] == 2) 
          result = 2;
      }
      cnt++;
    }
    cout << cnt << '\n';
    return 0;
}