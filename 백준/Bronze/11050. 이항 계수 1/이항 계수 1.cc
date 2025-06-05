#include <iostream>
using namespace std;

int main() 
{
    int N = 0, K = 0;
    cin >> N >> K;
    int pascal[N+1][N+1] = {0};
    for(int i = 0; i <= N; i++){
      for(int j = i; j >= 0; j--){
        if(j == 0 || j == i)
          pascal[i][j] = 1;
        else{
          pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
        }
      }
    }

    cout << pascal[N][K];
    
    return 0;
}