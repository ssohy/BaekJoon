#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int N = 0, cnt = 0;
    cin >> N;
    vector<int> score(N);
    for(int i = 0; i < N; i++){
      cin >> score[i];
    }
    for(int i = N - 1; i > 0; i--){
      while(score[i] <= score[i-1]){
        score[i-1]--;
        cnt++;
      }
    }
    cout << cnt << '\n';
    return 0;
}