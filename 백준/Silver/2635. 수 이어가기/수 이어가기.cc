#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int n, maxLen = 0;
    vector<int> maxArr;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        vector<int> arr;
        arr.push_back(n);
        arr.push_back(i);

        while (true) {
            int next = arr[arr.size() - 2] - arr[arr.size() - 1];
            if (next < 0) break;
            arr.push_back(next);
        }

        if (arr.size() > maxLen) {
            maxLen = arr.size();
            maxArr = arr;
        }
    }

    cout << maxLen << '\n';
    for (int i = 0; i < maxArr.size(); i++) {
        cout << maxArr[i];
        if (i != maxArr.size() - 1) cout << ' ';
    }
    return 0;
}
