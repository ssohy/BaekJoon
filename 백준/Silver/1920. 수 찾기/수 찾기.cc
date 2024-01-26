#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int N, M, tmp;
    unordered_set<int> A;

    scanf("%d", &N);
    for (int i = 0; i < N; ++i) {
        scanf("%d", &tmp);
        A.insert(tmp);
    }

    scanf("%d", &M);
    for (int i = 0; i < M; ++i) {
        scanf("%d", &tmp);
        if (A.find(tmp) != A.end())
            printf("1\n");
        else
            printf("0\n");
    }

    return 0;
}