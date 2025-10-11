#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() 
{
    int N = 0, g = 0;
    cin >> N;
    vector<int> ring(N);
    for(int i = 0; i < N; i++){
      cin >> ring[i];
      if(i != 0){
        g = gcd(ring[0], ring[i]);
        cout << ring[0] / g << "/" << ring[i] / g << '\n';
      }
    }
    
    return 0;
}