#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int N, M, num;
    unordered_set<int> numbers;

    scanf("%d", &N);
    for (int i = 0; i < N; ++i) {
        scanf("%d", &num);
        numbers.insert(num);
    }

    scanf("%d", &M);
    for (int i = 0; i < M; ++i) {
        scanf("%d", &num);
        if (numbers.find(num) != numbers.end())
            printf("1\n");
        else
            printf("0\n");
    }

    return 0;
}
