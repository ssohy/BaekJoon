#include <iostream>
using namespace std;

int main() 
{
    int a1 = 0, a2 = 0, c = 0, n0 = 0, result = -1;
    cin >> a1 >> a2 >> c >> n0;
    
    for(int i = n0; i < 1000; i++){
      if((a1*i + a2) <= c*i){
        result = 1;
      }
      else{
        result = 0;
        break;
      }
    }
    cout << result;
    return 0;
}
