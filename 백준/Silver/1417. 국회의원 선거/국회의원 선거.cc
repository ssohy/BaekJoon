#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
    int N = 0, dasom = 0, num = 0, cnt = 0;
    bool isDone = false;
    vector<int> candidate;
    cin >> N >> dasom;
    for(int i = 0; i < N - 1; i++){
      cin >> num;
      candidate.push_back(num);
    }
    if(N != 1){
      while(!isDone){
        sort(candidate.rbegin(), candidate.rend());
        for(int i = 0; i < N - 1; i++){
          if(dasom <= candidate[i]){
            candidate[i]--;
            dasom++;
            cnt++;
            break;
          }
          
          isDone = true;
        }
      }
    }
    
    
    cout << cnt;
    return 0;
}