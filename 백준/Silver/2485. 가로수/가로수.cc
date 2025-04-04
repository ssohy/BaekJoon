#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() 
{
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
    int N, cnt = 0, gap = 0, tmp = 0, num = 0;
    vector<int> positions, gaps;
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> tmp;
        positions.push_back(tmp);
    }
    for(int i = 1; i < N; i++)
      gaps.push_back(positions[i] - positions[i - 1]);
    
    num = gaps[0];
    for (int i = 1; i < N - 1; i++) { // 최대공약수 찾기
        num = gcd(num, gaps[i]);
    }
    
    for(int i = 1; i < N; i++){
      cnt += (positions[i] - positions[i - 1]) / num - 1;
    }

    cout << cnt << '\n';
    return 0;
}
