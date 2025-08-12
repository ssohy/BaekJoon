#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
    int N = 0, max = -1;
    string name = "";
    vector<pair<string, int>> best;
    vector<string> maxName;
    bool found = false;
    cin >> N;
    while(N--){
      cin >> name;
      found = false;
      for(int i = 0; i < best.size(); i++){
          if(best[i].first == name){
              best[i].second++;
              found = true;
              break;
          }
      }
      if(!found) 
        best.push_back(make_pair(name, 1));
    }
    
    for(int i = 0; i < best.size(); i++){
      if(max < best[i].second)
        max = best[i].second;
    }
    
    for(int i = 0; i < best.size(); i++){
      if(max == best[i].second)
        maxName.push_back(best[i].first);
    }
    
    sort(maxName.begin(), maxName.end());
    
    cout << maxName[0] << '\n';
    return 0;
}