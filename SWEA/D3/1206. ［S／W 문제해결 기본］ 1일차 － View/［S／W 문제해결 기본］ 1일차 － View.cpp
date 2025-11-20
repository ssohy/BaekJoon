#include <iostream>
using namespace std;

int main()
{
    int N = 0;
    for (int testCase = 1; testCase <= 10; testCase++) {
        int arr[1000] = { 0 };
        int sum = 0;
        cin >> N;
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        for (int i = 2; i < N-2; i++) {
            int curMax1 = 0, curMax2 = 0;
            curMax1 = max(arr[i - 2], arr[i - 1]);
            curMax2 = max(arr[i + 1], arr[i + 2]);
            if (arr[i] > max(curMax1, curMax2)) {
                sum += arr[i] - max(curMax1, curMax2);
            }
        }

        cout << "#" << testCase << " " << sum << '\n';
    }
}
