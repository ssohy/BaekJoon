#include <iostream>
using namespace std;

int main() 
{
    int n = 0, cnt = 0;
    string strN = "";
    char num;
    cin >> n >> num;
    for(int i = 1; i <= n; i++){
      strN = to_string(i);
      for(int j = 0; j < strN.length(); j++){
        if(strN[j] == num)
          cnt++;
      }
    }
    
    cout << cnt;
    return 0;
}