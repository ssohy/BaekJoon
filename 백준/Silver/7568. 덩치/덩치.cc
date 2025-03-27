#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int N = 0, x = 0, y = 0, cnt = 1;
    vector<pair<int, int>> dungChi;
    cin >> N;
    for(int i = 0; i < N; i++){
      cin >> x >> y;
      dungChi.push_back(make_pair(x, y));
    }
    for(int i = 0; i < N; i++){
      cnt = 1;
      for(int j = 0; j < N; j++){
        if(dungChi[i].first < dungChi[j].first && dungChi[i].second < dungChi[j].second){
          cnt++;
        }
      }
      cout << cnt << " ";
    }
    
    return 0;
}