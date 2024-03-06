#include <iostream>
#include <unordered_map>
#include <climits>
using namespace std;
int main() {
    int N = 0, maxCount = 0;    
    unordered_map<long long, int> card;
    long long tmp = 0, index = LLONG_MAX;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> tmp;
        card[tmp]++;
    }
    for (const auto& pair : card) {
        if (pair.second > maxCount || (pair.second == maxCount && pair.first < index)) {
            maxCount = pair.second;
            index = pair.first;
        }
    }
    cout << index << endl;
    return 0;
}