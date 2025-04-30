#include <iostream>
#include <algorithm>
using namespace std;


char board[50][50];
int repaintCount(int row, int col) {
    int countW = 0;
    int countB = 0;

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            char current = board[row + i][col + j];
            if ((i + j) % 2 == 0) {
                if (current != 'W') countW++;
                if (current != 'B') countB++;
            } else {
                if (current != 'B') countW++;
                if (current != 'W') countB++;
            }
        }
    }
    return min(countW, countB);
}

int main() {
    int minCount = 64, N = 0, M = 0;
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> board[i][j];
        }
    }

    

    for (int i = 0; i <= N - 8; i++) {
        for (int j = 0; j <= M - 8; j++) {
            int result = repaintCount(i, j);
            if (result < minCount) {
                minCount = result;
            }
        }
    }

    cout << minCount << '\n';
    return 0;
}
