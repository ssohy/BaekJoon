#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n = 0;

    cin >> n;
    vector<int> makeOne(n+1);
    for(int i = 2; i <= n; i++){
      makeOne[i] = makeOne[i - 1] + 1;
      if(i % 2 == 0)
        makeOne[i] = makeOne[i] < makeOne[i / 2] + 1 ? makeOne[i] : makeOne[i / 2] + 1;
      
      if(i % 3 == 0)
        makeOne[i] = makeOne[i] < makeOne[i / 3] + 1 ? makeOne[i] : makeOne[i / 3] + 1;
    }
    
    cout << makeOne[n] << '\n';
    return 0;
}