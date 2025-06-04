#include <iostream>
#include <numeric>
using namespace std;

bool f(string& str1, string& str2){
  int len = lcm(str1.length(), str2.length());
  for(int i = 0; i < len; i++){
    if(str1[i % str1.length()] != str2[i % str2.length()])
      return false;
  }
  return true;
}

int main() 
{
    string s = "", t = "";
    cin >> s >> t;
    cout << f(s, t);
    return 0;
}