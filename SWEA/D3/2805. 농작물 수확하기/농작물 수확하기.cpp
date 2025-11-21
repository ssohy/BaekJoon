#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 0;
    cin >> T;
    for(int testCase = 1; testCase <= T; testCase++){
        int N = 0, sum = 0;
        cin >> N;
        vector<string> arr(N);
        int mid = N / 2;
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (abs(i - mid) + abs(j - mid) <= mid) {
                    sum += arr[i][j] - '0';
                }
            }
        }

        cout << "#" << testCase << " " << sum << '\n';
    }
}
