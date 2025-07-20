#include <iostream>
using namespace std;

int main() 
{
    int a = 0, b = 0, c = 0, d = 0, cnt = 0;
    for(int i = 0; i < 3; i++){
      cin >> a >> b >> c >> d;
      cnt = 0;
      if(a == 0)
        cnt++;
        
      if(b == 0)
        cnt++;
      
      if(c == 0)
        cnt++;
        
      if(d == 0)
        cnt++;
        
      if(cnt == 0)
        cout << "E" << '\n';
      else if(cnt == 1)
        cout << "A" << '\n';
      else if(cnt == 2)
        cout << "B" << '\n';
      else if(cnt == 3)
        cout << "C" << '\n';
      else if(cnt == 4)
        cout << "D" << '\n';
    }
    return 0;
}