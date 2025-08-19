#include <iostream>
#include <vector>
using namespace std;

int N, M;
vector<int> result;
vector<bool> visited;

void dfs() {
    if (result.size() == M) {
        for (int i = 0; i < M; i++) {
            cout << result[i] << (i == M - 1 ? '\n' : ' ');
        }
        return;
    }

    for (int i = 1; i <= N; i++) {
        if (!visited[i]) {
            visited[i] = true;
            result.push_back(i);

            dfs();

            result.pop_back();
            visited[i] = false;
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;
    visited.assign(N + 1, false);

    dfs();

    return 0;
}
