#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int N = 0, x = 0, y = 0;
    vector<pair<int, int>> xy;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> x >> y;
        xy.push_back({x, y});
    }
    sort(xy.begin(), xy.end());
    for (int i = 0; i < N; i++)
		cout << xy[i].first << ' ' << xy[i].second << '\n';
    return 0;
}
