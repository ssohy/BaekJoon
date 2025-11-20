#include <iostream>
using namespace std;

int main()
{
    int T = 0, N = 0;
    cin >> T;
    for (int testCase = 1; testCase <= T; testCase++) {
        int sum = 0;
        cin >> N;
        for (int i = 1; i <= N; i++) {
            if (i % 2 == 1) {
                sum += i;
            }
            else sum -= i;
        }
        cout << "#" << testCase << " " << sum << '\n';
    }
}