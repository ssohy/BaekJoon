#include <iostream>
#include <vector>
using namespace std;

int N, M;
vector<int> sequence;

void dfs(int start, int depth) {
    if (depth == M) {
        for (int num : sequence)
            cout << num << " ";
        cout << '\n';
        return;
    }

    for (int i = start; i <= N; ++i) {
        sequence.push_back(i);
        dfs(i, depth + 1);
        sequence.pop_back();
    }
}

int main() {
    cin >> N >> M;
    dfs(1, 0);
    return 0;
}
