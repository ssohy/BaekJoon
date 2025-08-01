#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main() 
{
    int T = 0, J = 0, N = 0, r = 0, c = 0, result = 0;
    cin >> T;
    while(T--){
      vector<int> box;
      cin >> J >> N;
      for(int i = 0 ; i < N; i++){
        cin >> r >> c;
        box.push_back(r * c);
      }
      sort(box.rbegin(), box.rend());
      for(int i = 0; i < N; i++){
        if(J <= 0) break;
        else{
          J -= box[i];
          result++;
        }
      }
      cout << result << '\n';
      result = 0;
    }
    return 0;
}