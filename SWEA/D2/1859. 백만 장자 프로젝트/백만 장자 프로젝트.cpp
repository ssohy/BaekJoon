#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T = 0, maxPrice = 0;
    long long totalProfit = 0;
    cin >> T;

    for (int testCase = 1; testCase <= T; testCase++) {
        int N;
        cin >> N;
        vector<int> prices(N);
        totalProfit = 0; maxPrice = 0;
        for (int i = 0; i < N; i++) {
            cin >> prices[i];
        }

        for (int i = N - 1; i >= 0; i--) {
            if (prices[i] > maxPrice) {
                maxPrice = prices[i];
            } else {
                totalProfit += (maxPrice - prices[i]);
            }
        }

        cout << "#" << testCase << " " << totalProfit << "\n";
    }

    return 0;
}