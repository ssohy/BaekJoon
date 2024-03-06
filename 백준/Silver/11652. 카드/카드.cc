#include <iostream>
#include <unordered_map>
#include <climits>

using namespace std;

int main() {
    int N;
    cin >> N;

    unordered_map<long long, int> cardCount;

    long long num;
    for (int i = 0; i < N; ++i) {
        cin >> num;
        cardCount[num]++;
    }

    long long mostFrequentNumber = LLONG_MAX;
    int maxCount = 0;
    for (const auto& pair : cardCount) {
        if (pair.second > maxCount || (pair.second == maxCount && pair.first < mostFrequentNumber)) {
            maxCount = pair.second;
            mostFrequentNumber = pair.first;
        }
    }

    cout << mostFrequentNumber << endl;

    return 0;
}
