#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int K = 0, N = 0, score = 0, tmpGap = 0, maxGap = 0;
    cin >> K;
    
    for(int i = 0; i < K; i++){
      vector<int> classScore;
      maxGap = 0;
      cin >> N;
     
      for(int j = 0; j < N; j++){
        cin >> score;
        classScore.push_back(score);
        
      }
      sort(classScore.begin(), classScore.end());
      for(int j = 0; j < N; j++){
        if(j != 0){
          tmpGap = classScore[j] - classScore[j - 1];
          if(tmpGap > maxGap)
            maxGap = tmpGap;
        }
      }
      cout << "Class " << i + 1 << '\n';
      cout << "Max " << classScore[N - 1] << ", Min " << classScore[0] <<  ", Largest gap " << maxGap << '\n';
    }
    return 0;
}