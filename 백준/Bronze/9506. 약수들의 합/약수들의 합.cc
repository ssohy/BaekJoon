#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int n = 0, sum = 0;
    cin >> n;
    while(n != -1){
      vector<int> measure;
      for(int i = 1; i < n; i++){
        if(n % i == 0)
          measure.push_back(i);
      }
      for(int i = 0; i < measure.size(); i++)
        sum += measure[i];
      
      if(sum == n){
        cout << n << " = " << measure[0];
        for(int i = 1; i < measure.size(); i++)
          cout << " + " << measure[i];
        cout << '\n';
      }
      else{
        cout << n << " is NOT perfect." << '\n';
      }
      sum = 0;
      cin >> n;
    }
    return 0;
}
