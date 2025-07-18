#include <iostream>
using namespace std;

int main() 
{
    int N = 0, M = 0;
    cin >> N >> M;
    if(M == 1 || M == 2)
      cout << "NEWBIE!" << '\n';
    else if(N < M)
      cout << "TLE!" << '\n';
    else cout << "OLDBIE!" << '\n';
    return 0;
}