#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <functional>    // 이 줄 추가!

using namespace std;

string N;
vector<char> K;

// 두 문자열을 숫자 크기로 비교
bool isGreater(const string &a, const string &b) {
    if (a.size() != b.size()) return a.size() > b.size();
    return a > b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int k;
    cin >> N >> k;
    K.resize(k);
    for (int i = 0; i < k; i++) {
        int x; 
        cin >> x;
        K[i] = char('0' + x);
    }
    sort(K.begin(), K.end(), greater<char>());  // 내림차순

    string answer = "";

    function<void(int,bool,string&)> build = [&](int pos, bool limited, string &cur) {
        // 완성된 경우
        if (pos == (int)N.size()) {
            if (cur <= N && isGreater(cur, answer))
                answer = cur;
            return;
        }
        for (char d : K) {
            if (limited && d > N[pos]) continue;
            cur.push_back(d);
            build(pos+1, limited && (d == N[pos]), cur);
            cur.pop_back();
        }
    };

    // 1) N과 같은 자릿수
    {
        string cur = "";
        build(0, true, cur);
    }

    // 2) 짧은 자릿수 (N.size()-1 자리)
    if ((int)N.size() > 1) {
        string cur(N.size()-1, K[0]);
        if (isGreater(cur, answer))
            answer = cur;
    }

    cout << answer << "\n";
    return 0;
}
