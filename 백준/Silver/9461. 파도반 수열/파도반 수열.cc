#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int T = 0, N = 0;
    vector<long long> P;
    cin >> T;
    
    P.push_back(1);
    P.push_back(1);
    P.push_back(1);
    P.push_back(2);
    P.push_back(2);

    while(T--){
      cin >> N;
      if(P.size() < N){
        for(int i = P.size(); i < N; i++){
          P.push_back(P[i-5]+P[i-1]);
        }
      }
      cout << P[N-1] << '\n';
    }

    return 0;
}