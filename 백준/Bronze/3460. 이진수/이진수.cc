#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int T = 0, n = 0;
    cin >> T;
    while(T--){
      cin >> n;
      vector<int> binary;
      while(n > 0){
        binary.push_back(n % 2);
        n /= 2;
      }
      for(int i = 0; i < binary.size(); i++){
        if(binary[i] == 1)
          cout << i << " ";
      }
      cout << '\n';
    }
    return 0;
}