#include <iostream>
using namespace std;

int main() 
{
    int a = 0, b = 0, c = 0;
    cin >> a >> b >> c;
    if(a == 60 && b == 60 && c == 60){
      cout << "Equilateral";
      return 0;
    }
    else if(a + b + c == 180){
      if(a == b || a == c || b == c)
        cout << "Isosceles";
      else
        cout << "Scalene";
    }
    else if(a + b + c != 180)
      cout << "Error";
    
    return 0;
}