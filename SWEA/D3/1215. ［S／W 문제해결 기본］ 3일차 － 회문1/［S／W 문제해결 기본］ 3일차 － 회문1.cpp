#include <iostream>
#include <vector>
using namespace std;

int main()
{
    for (int testCase = 1; testCase <= 10; testCase++) {
        int N = 0, cnt = 0;
        vector<string> arr(8);;
        cin >> N;
        
        for (int i = 0; i < 8; i++) {
            cin >> arr[i];
        }
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j <= 8-N; j++) {
                bool isPalindrome = true;
                for (int k = 0; k < N / 2; k++) {
                    if (arr[i][j + k] != arr[i][j + N - 1 - k]) {
                        isPalindrome = false;
                        break;
                    }
                }
                if (isPalindrome) cnt++;
            }
        }
        for (int j = 0; j < 8; j++) {
            for (int i = 0; i <= 8 - N; i++) {
                bool isPalindrome = true;
                for (int k = 0; k < N / 2; k++) {
                    if (arr[i + k][j] != arr[i + N - 1 - k][j]) {
                        isPalindrome = false;
                        break;
                    }
                }
                if (isPalindrome) cnt++;
            }
        }

        cout << "#" << testCase << " " << cnt << '\n';
    }
}