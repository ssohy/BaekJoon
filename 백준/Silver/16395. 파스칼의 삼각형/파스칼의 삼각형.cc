#include <iostream>
using namespace std;

int main() 
{
    int n = 0, k = 0;
    cin >> n >> k;
    int pascal[n][n] = {0};
    for(int i = 0; i < n; i++){
      for(int j = i; j >= 0; j--){
        if(j == 0 || j == i)
          pascal[i][j] = 1;
        else{
          pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
        }
      }
    }
    
     cout << pascal[n - 1][k - 1];
    
    return 0;
}