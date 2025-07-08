#include <iostream>
using namespace std;

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int result = 0, x1 = 0, y1 = 0, x2 = 0, y2 = 0, maxX = 0, maxY = 0;
    int area[101][101] = {0};
    for(int T = 0; T < 4; T++){
      cin >> x1 >> y1 >> x2 >> y2;
      if(maxX < x2)
        maxX = x2;
      if(maxY < y2)
        maxY = y2;
      for(int i = x1; i < x2; i++){
        for(int j = y1; j < y2; j++){
          area[i][j] = 1;
        }
      }
    }
    
    
    
    for(int i = 0; i <= maxX; i++){
      for(int j = 0; j <= maxY; j++){
        if(area[i][j] == 1)
          result++;
      }
    }
    cout << result;
    return 0;
}