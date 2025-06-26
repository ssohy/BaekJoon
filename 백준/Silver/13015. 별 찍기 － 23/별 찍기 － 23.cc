#include <iostream>
using namespace std;

void PrintStarFirstEnd(int n) {
    for (int j = 0; j < n; j++)
        cout << "*";
}

void PrintSpaceFirstEnd(int n) {
    for (int j = 0; j < 2 * n - 3; j++)
        cout << " ";
}

void PrintCenter(int n, int space) {
    for (int j = 0; j < space; j++)
        cout << " ";
    cout << "*";
    for (int j = 0; j < n - 2; j++)
        cout << " ";
    cout << "*";
    for (int j = 0; j < n - 2; j++)
        cout << " ";
    cout << "*";
}

void PrintElse(int n, int space) {
    for (int j = 0; j < space; j++)
        cout << " ";
    cout << "*";
    for (int j = 0; j < n - 2; j++)
        cout << " ";
    cout << "*";
    for (int j = 0; j < 2 * (n - space - 1) - 1; j++)
        cout << " ";
    cout << "*";
    for (int j = 0; j < n - 2; j++)
        cout << " ";
    cout << "*";
}

int main() {
    int N;
    cin >> N;
    int total = 2 * N - 1;

    for (int i = 1; i <= total; i++) {
        int line = i <= N ? i : total - i + 1;
        
        if (line == 1) {
            PrintStarFirstEnd(N);
            PrintSpaceFirstEnd(N);
            PrintStarFirstEnd(N);
            cout << '\n';
        } else if (line == N) {
            PrintCenter(N, line - 1);
            cout << '\n';
        } else {
            PrintElse(N, line - 1);
            cout << '\n';
        }
    }

    return 0;
}
