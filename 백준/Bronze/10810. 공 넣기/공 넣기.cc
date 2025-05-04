#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int N = 0, M = 0, i = 0, j = 0, k = 0;
    cin >> N >> M;
    vector<int> basket(N+1);
    while(M--){
      cin >> i >> j >> k;
      for(int a = i; a <= j; a++){
        basket[a] = k;
      }
    }
    for(int a = 1; a <= N; a++){
      cout << basket[a] << " ";
    }
    return 0;
}