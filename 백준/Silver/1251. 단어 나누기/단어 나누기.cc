#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string word = "", result = "z", p1 = "", p2 = "", p3 = "", tmpResult = "";
    cin >> word;

    int len = word.length();
    for (int i = 1; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            p1 = word.substr(0, i);
            p2 = word.substr(i, j - i);
            p3 = word.substr(j);

            reverse(p1.begin(), p1.end());
            reverse(p2.begin(), p2.end());
            reverse(p3.begin(), p3.end());

            tmpResult = p1 + p2 + p3;

            if (tmpResult < result) {
                result = tmpResult;
            }
        }
    }

    cout << result << endl;
    return 0;
}
