#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int cnt = 0;
    for (int testCase = 1; testCase <= 10; testCase++) {
        int arr[100] = { 0 };
        cin >> cnt;

        for (int i = 0; i < 100; i++) {
            cin >> arr[i];
        }
        for (int i = 0; i < cnt; i++) {
            sort(arr, arr + 100);
            arr[0]++;
            arr[99]--;
            if (arr[0] == arr[99] || arr[99] - arr[0] == 1) break;
        }
        sort(arr, arr + 100);
        cout << "#" << testCase << " " << arr[99] - arr[0] << '\n';
    }
}