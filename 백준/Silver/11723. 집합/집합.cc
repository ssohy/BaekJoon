#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Operation {
    vector<int> S;

public:
    void add(int num) {
        if (find(S.begin(), S.end(), num) == S.end()) {
            S.push_back(num);
        }
    }

    void remove(int num) {
        auto it = find(S.begin(), S.end(), num);
        if (it != S.end()) {
            S.erase(it);
        }
    }

    int check(int num) {
        return (find(S.begin(), S.end(), num) != S.end()) ? 1 : 0;
    }

    void toggle(int num) {
        auto it = find(S.begin(), S.end(), num);
        if (it != S.end()) {
            S.erase(it);
        } else {
            S.push_back(num);
        }
    }

    void all() {
        S.clear();
        for (int i = 1; i <= 20; ++i) {
            S.push_back(i);
        }
    }

    void empty() {
        S.clear();
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int M, n;
    string oper;
    Operation s;

    cin >> M;
    while (M--) {
        cin >> oper;
        if (oper == "add") {
            cin >> n;
            s.add(n);
        } else if (oper == "remove") {
            cin >> n;
            s.remove(n);
        } else if (oper == "check") {
            cin >> n;
            cout << s.check(n) << '\n';
        } else if (oper == "toggle") {
            cin >> n;
            s.toggle(n);
        } else if (oper == "all") {
            s.all();
        } else if (oper == "empty") {
            s.empty();
        }
    }
    return 0;
}
