#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() 
{
    vector<int> player;
    int tmp = 0;
    for(int i = 0; i < 4; i++){
      cin >> tmp;
      player.push_back(tmp);
    }
    sort(player.begin(), player.end());
    cout << abs((player[0]+player[3]) - (player[1]+player[2]));
    return 0;
}