#include <iostream>
#include <queue>
using namespace std;

int main() {
    int N = 0;
    queue<int> card;

    // 입력 받기
    cin >> N;

    // 큐에 카드 번호 삽입
    for (int i = 1; i <= N; i++) {
        card.push(i);
    }

    // 카드 뽑기
    while (!card.empty()) {
        // 맨 위의 카드 출력
        cout << card.front() << " ";
        card.pop();

        // 다음 카드를 맨 뒤로 보내기
        if (!card.empty()) {
            int next_card = card.front();
            card.pop();
            card.push(next_card);
        }
    }

    return 0;
}
