#include <iostream>
#include <queue>
using namespace std;
int main() {
    int N = 0;
    queue<int> card;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        card.push(i);
    }

    while (!card.empty()) {
        cout << card.front() << " ";
        card.pop();
        if (!card.empty()) {
            int next_card = card.front();
            card.pop();
            card.push(next_card);
        }
    }
    return 0;
}