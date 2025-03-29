#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int N = 0, M = 0, tmp = 0, sum = 0, cnt = 0;
    vector<int> num;
    cin >> N >> M;
    for(int i = 0; i < N; i++){
      cin >> tmp;
      num.push_back(tmp);
    }
    
    for(int i = 0; i < N; i++){
      for(int j = i + 1; j < N; j++){
        sum = num[i] + num[j];
        if(sum == M)
          cnt++;
      }
    }
    
    cout << cnt;
    return 0;
}