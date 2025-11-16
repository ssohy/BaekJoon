#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N = 0, taesu = 0, P = 0, score = 0, taesuRank = 1;
    vector<int> ranking;
    cin >> N >> taesu >> P;

    if (N == 0) {
        cout << 1 << '\n';
        return 0;
    }

    for (int i = 0; i < N; i++) {
        cin >> score;
        ranking.push_back(score);
    }

    if (N == P && taesu <= ranking[N - 1]) {
        cout << -1 << '\n';
        return 0;
    }

    for (int i = 0; i < N; i++) {
        if (ranking[i] > taesu) {
            taesuRank++;
        } else break;
    }

    cout << taesuRank << '\n';

    return 0;
}