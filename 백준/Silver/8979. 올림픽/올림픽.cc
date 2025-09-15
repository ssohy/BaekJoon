#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(const vector<int>& a, const vector<int>& b)
{
    if(a[1] != b[1])
      return a[1] > b[1];
    if(a[2] != b[2])
      return a[2] > b[2];
    
    return a[3] > b[3];
}


int main() 
{
    int N = 0, K = 0, n = 0, g = 0, s = 0, b = 0;
    cin >> N >> K;
    vector<vector<int>> score(N, vector<int>(5, 0));
    
    for(int i = 0; i < N; i++) {
      cin >> score[i][0] >> score[i][1] >> score[i][2] >> score[i][3];
      score[i][4] = 0; // 등수
    }
    
    sort(score.begin(), score.end(), compare);
    score[0][4] = 1;
    for(int i = 1; i < N; i++){
      if(score[i][1] == score[i - 1][1] &&
         score[i][2] == score[i - 1][2] &&
         score[i][3] == score[i - 1][3])
         score[i][4] = score[i - 1][4];
      else{
        score[i][4] =  i + 1;
      }
    }
    
    for(int i = 0; i < N; i++){
        if(score[i][0] == K) cout << score[i][4];
    }
    return 0;
}