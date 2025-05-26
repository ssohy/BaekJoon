#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N = 0, K = 0, P = 0, cnt = 0, result = 0;
    vector<int> Era;
    cin >> N >> K;
    
    for(int i = 2; i <= N; i++){
      Era.push_back(i);
    }
      
    while(!Era.empty()){
      P = Era[0];
      for(int i = 0; i < Era.size(); i++){
        result = Era[i];
        if(Era[i] % P == 0){
          Era.erase(Era.begin() + i, Era.begin() + i + 1);
          cnt++;
          i--;
        }
        if(cnt == K)
          break;
      }
      if(cnt == K)
        break;
    }
    
    cout << result;
    return 0;
}