#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long N;
    cin >> N;
    vector<long long> fac;
    fac.push_back(1); // 0!
    for (int i = 1; i <= 20; ++i) {
        fac.push_back(fac.back() * i);
    }

    if (N == 0) {
        cout << "NO" << endl;
        return 0;
    }
    for (int i = 20; i >= 0; --i) {
        if (N >= fac[i]) {
            N -= fac[i];
        }
    }

    cout << (N == 0 ? "YES" : "NO") << endl;
    return 0;
}
