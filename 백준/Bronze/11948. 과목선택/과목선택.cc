#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int score[4] = {0}, score2[2] = {0}, sum = 0;
    for(int i = 0; i < 4; i++){
      cin >> score[i];
    }
    
    for(int i = 0; i < 2; i++){
      cin >> score2[i];
    }
    sort(score, score + 4);
    sort(score2, score2 + 2);
    
    for(int i = 3; i > 0; i--){
      sum += score[i];
    }
    
    for(int i = 1; i > 0; i--){
      sum += score2[i];
    }
    
    cout << sum;
    return 0;
}