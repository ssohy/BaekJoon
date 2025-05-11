#include <iostream>
using namespace std;

int main() {
    int N = 0, M = 0, J = 0, left = 1, right = 0, applePos = 0, moveCount = 0;
    cin >> N >> M >> J;

    right = M;

    for (int i = 0; i < J; i++) {
        cin >> applePos;
        if (applePos < left) {
            moveCount += (left - applePos);
            right -= (left - applePos);
            left = applePos;
        } else if (applePos > right) {
            moveCount += (applePos - right);
            left += (applePos - right);
            right = applePos;
        }
    }

    cout << moveCount << endl;
    return 0;
}
