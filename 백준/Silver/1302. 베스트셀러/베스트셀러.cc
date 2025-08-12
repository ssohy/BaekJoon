#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N = 0, maxCnt = 0;
    string name = "", answer = "";
    unordered_map<string,int> best;
    cin >> N;

    best.reserve(N * 2);

    while (N--) {
        cin >> name;
        best[name]++;
    }

    for (const auto &i : best) {
        const string &str = i.first;
        int cnt = i.second;
        if (cnt > maxCnt || (cnt == maxCnt && str < answer)) {
            maxCnt = cnt;
            answer = str;
        }
    }
    cout << answer << '\n';
    return 0;
}
