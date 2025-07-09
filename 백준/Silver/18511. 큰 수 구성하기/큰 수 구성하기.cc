#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

string N;
vector<char> K;
string answer = "";

// 숫자 문자열 a, b 중 a가 더 큰 수인지 판단
bool isGreater(const string &a, const string &b) {
    if (a.size() != b.size())
        return a.size() > b.size();  // 자릿수가 더 많으면 더 큰 수
    return a > b;                    // 같으면 사전식 비교
}

// targetLen: 목표 자릿수, pos: 현재 깊이(0부터), isLimited: N과 같은 prefix를 따라가야 하는지, cur: 현재까지 만든 문자열
void dfs(int targetLen, int pos, bool isLimited, const string &cur) {
    if (pos == targetLen) {
        // 길이가 N보다 짧거나, 같을 때 N 이하인 경우만 정답 후보로
        if (targetLen < (int)N.size() || cur <= N) {
            if (isGreater(cur, answer))
                answer = cur;
        }
        return;
    }

    for (char digit : K) {
        if (isLimited && targetLen == (int)N.size()) {
            // 아직 N과 같은 자리수 구간이라면 N[pos]를 넘을 수 없음
            if (digit > N[pos]) continue;
            bool nextLimit = (digit == N[pos]);
            dfs(targetLen, pos + 1, nextLimit, cur + digit);
        } else {
            // 이미 N보다 작은 prefix를 골랐거나, 짧은 자릿수인 경우는 자유롭게 채움
            dfs(targetLen, pos + 1, false, cur + digit);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    cin >> N >> k;
    K.resize(k);
    for (int i = 0; i < k; i++) {
        int x;
        cin >> x;
        K[i] = char('0' + x);
    }

    // 큰 수부터 탐색하도록 내림차순 정렬
    sort(K.begin(), K.end(), greater<char>());

    // 1자리부터 N의 자릿수까지 모두 탐색
    for (int len = 1; len <= (int)N.size(); len++) {
        dfs(len, 0, len == (int)N.size(), "");
    }

    cout << answer << "\n";
    return 0;
}
