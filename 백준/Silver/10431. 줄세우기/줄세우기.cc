#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int p = 0, T = 0, idx = 0, cnt = 0, tmp = 0;
    cin >> p;
    while(p--){
      vector<int> students(20);
      cnt = 0;
      cin >> T;
      for(int i = 0; i < 20; i++){
        cin >> students[i];
        idx = i;
        while(true){
          if(idx == 0) break;
          if(students[idx-1] > students[idx]){
            tmp = students[idx - 1];
            students[idx - 1] = students[idx];
            students[idx] = tmp;
            cnt++;
            idx--;
          }else break;
        }
      }
      cout << T << " " << cnt << '\n'; 
    }
    return 0;
}