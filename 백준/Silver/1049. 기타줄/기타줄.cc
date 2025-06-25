#include <iostream>
using namespace std;

int main() {
    int N = 0, M = 0, a = 0, b = 0, pack = 1000, each = 1000;
    cin >> N >> M;

    while(M--) {
        cin >> a >> b;
        pack = min(pack, a);
        each = min(each, b);
    }
	
    cout << min((N / 6+1) * pack, min(N / 6 * pack + N % 6 * each, N * each)) << '\n';
}