#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
    int N = 0;
    bool isInc = true, isDec = true;
    string tmp = "";
    vector<string> nameOrigin, nameInc, nameDec;
    cin >> N;
    while(N--){
      cin >> tmp;
      nameOrigin.push_back(tmp);
      nameInc.push_back(tmp);
      nameDec.push_back(tmp);
    }
    sort(nameInc.begin(), nameInc.end());
    sort(nameDec.rbegin(), nameDec.rend());

    for(int i = 0; i < nameOrigin.size(); i++){
      if(nameOrigin[i] != nameInc[i]){
        isInc = false;
        break;
      }
    }
    for(int i = 0; i < nameOrigin.size(); i++){
      if(nameOrigin[i] != nameDec[i]){
        isDec = false;
        break;
      }
    }
    
    
    
    if(isInc)
      cout << "INCREASING";
    else if(isDec)
      cout << "DECREASING";
    else
      cout << "NEITHER";
    
    return 0;
}