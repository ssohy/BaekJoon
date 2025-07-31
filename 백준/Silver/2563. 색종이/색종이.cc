#include <iostream>
using namespace std;

int main() 
{
    int paper[101][101] = {0};
    int n = 0, x = 0, y = 0, cnt = 0;
    cin >> n;
    while(n--){
      cin >> x >> y;
      for(int i = x; i < x + 10; i++){
        for(int j = y; j < y + 10; j++){
          paper[i][j] = 1;
        }
      }
    }
    
    for(int i = 0; i < 101; i++){
      for(int j = 0; j < 101; j++){
        if(paper[i][j] == 1) cnt++;
      }
    }
    
    cout << cnt << '\n';
    return 0;
}