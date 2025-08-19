#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T = 0;
    cin >> T;
    while(T--) {
        int N = 0, M = 0;
        cin >> N >> M;

        for(int i = 0; i < M; i++){
            int a, b;
            cin >> a >> b;
        }

        cout << (N - 1) << "\n";
    }

    return 0;
}
