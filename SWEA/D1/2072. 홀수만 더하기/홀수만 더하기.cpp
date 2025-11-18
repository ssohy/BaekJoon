#include <iostream>
using namespace std;

int main() 
{
    int T = 0, num = 0, sum = 0;
    cin >> T;
    for(int i = 1; i <= T; i++){
      sum = 0;
      for(int j = 0; j < 10; j++){
        cin >> num;
        if(num % 2 == 1) sum += num;
      }
      cout << "#" << i << " " << sum << '\n';
    }
    return 0;
}