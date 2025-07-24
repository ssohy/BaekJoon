#include <iostream>
using namespace std;


int main() 
{
    string A = "", B = "";
    int result = 51, cnt = 0;
    cin >> A >> B;
    
    for(int i = 0; i <= B.length() - A.length(); i++){
      cnt = 0;
      for(int j = 0; j < A.length(); j++){
        if(A[j] != B[j+i]) {
          cnt++;
        }
      }
      result = result < cnt ? result : cnt;
    }
    
    cout << result << '\n';
    return 0;
}