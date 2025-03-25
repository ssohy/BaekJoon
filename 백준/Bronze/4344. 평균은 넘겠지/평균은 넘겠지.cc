#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int C = 0, N = 0, tmp = 0;
    double avg = 0, cnt = 0, sum = 0;
    cin >> C;
    while(C--){
      cin >> N;
      vector<int> score;
      for(int i = 0; i < N; i++){
        cin >> tmp;
        sum += tmp;
        score.push_back(tmp);
      }
      avg = sum / N;
      for(int i = 0; i < N; i++){
        if(avg < score[i])
          cnt++;
      }
      cout << fixed;
      cout.precision(3);
      cout << cnt * 100 / N  << "%" << '\n';
      sum = 0;
      cnt = 0;
    }
    return 0;
}