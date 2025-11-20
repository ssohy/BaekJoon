#include <iostream>
#include <string>
using namespace std;

string num;
int maxCnt, answer;

void dfs(int idx, int cnt)
{
    if (cnt == maxCnt) {
        answer = max(answer, stoi(num));
        return;
    }

    for (int i = idx; i < num.length() - 1; i++) {
        for (int j = i + 1; j < num.length(); j++) {
            if (num[i] <= num[j]) {
                swap(num[i], num[j]);
                dfs(i, cnt + 1);
                swap(num[i], num[j]);
            }

            if (i == num.length() - 2 && j == num.length() - 1) {
                swap(num[i], num[j]);
                dfs(i, cnt + 1);
                swap(num[i], num[j]);
            }
        }
    }
}

int main()
{
    int C = 0;
    cin >> C;
    for (int testCase = 1; testCase <= C; testCase++) {
        cin >> num >> maxCnt;
        answer = 0;
        dfs(0, 0);
        cout << "#" << testCase << " " << answer << '\n';
    }
}