#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test = 10;
    while(test--){
        int testCase = 0, maxSum = 0, arr[100][100] = { 0 };
        cin >> testCase;
        for (int i = 0; i < 100; i++) {
            for (int j = 0; j < 100; j++) {
                cin >> arr[i][j];
            }
        }

        for (int i = 0; i < 100; i++) {
            int colSum = 0, rowSum = 0;
            for (int j = 0; j < 100; j++) {
                colSum += arr[i][j]; // 세로
                rowSum += arr[j][i]; // 가로
            }
            maxSum = max(maxSum, max(rowSum, colSum));
        }

        int diaSum1 = 0, diaSum2 = 0;
        for (int i = 0; i < 100; i++) {
            diaSum1 += arr[i][i]; // 대각선
            diaSum2 += arr[i][99 - i]; // 반대 대각선
        }
        maxSum = max(maxSum, max(diaSum1, diaSum2));
        cout << "#" << testCase << " " << maxSum << '\n';
    }
}