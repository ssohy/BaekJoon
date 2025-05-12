#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N = 0, num = 0, max = 0, one = 0, maxInx = 0, tmp = 0;
    vector<int> maxNum;
    cin >> N;

    
    while(N--){
      vector<int> card;
      max = 0;
      for(int i = 0; i < 5; i++){
        cin >> num;
        card.push_back(num);
      }
      for(int i = 0; i < 5; i++){
        for(int j = i + 1; j < 5; j++){
          for(int k = j + 1; k < 5; k++){
            one = (card[i] + card[j] + card[k]) % 10;
            if(one >= max)
              max = one;
          }
        }
      }
      maxNum.push_back(max);
    }
    
    for(int i = 0; i < maxNum.size(); i++){
      if(maxNum[i] >= tmp){
        tmp = maxNum[i];
        maxInx = i;
      }
    }
    
    cout << maxInx + 1;
    
    return 0;
}