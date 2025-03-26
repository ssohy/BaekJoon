#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() 
{
    vector<pair<int,int>> arr;
    vector<int> index;
    int score = 0, sum = 0;
    for(int i = 0; i < 8; i++){
      cin >> score;
      arr.push_back(make_pair(score, i+1));
    }
    sort(arr.begin(), arr.end());
    for(int i = 3; i < 8; i++){
      sum += arr[i].first;
      index.push_back(arr[i].second);
    }
    cout << sum << '\n';
    sort(index.begin(), index.end());
    for(int i = 0; i < 5; i++)
      cout << index[i] << " ";
      
      
    return 0;
}