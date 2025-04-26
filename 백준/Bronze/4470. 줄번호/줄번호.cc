#include <iostream>
using namespace std;

int main() 
{
    int N = 0;
    string str = "";
    cin >> N;
    getline(cin, str);
    for(int i = 0; i < N; i++){
      getline(cin, str);
      cout << i+1 << ". " << str << '\n';
    }
    return 0;
}