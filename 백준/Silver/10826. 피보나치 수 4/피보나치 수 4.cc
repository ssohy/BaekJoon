#include <iostream>
#include <vector>
using namespace std;

string addStrings(const string& a, const string& b) {
    string result = "";
    int carry = 0;
    int i = (int)a.size() - 1, j = (int)b.size() - 1;

    while (i >= 0 || j >= 0 || carry) {
        int digitA = (i >= 0) ? a[i--] - '0' : 0;
        int digitB = (j >= 0) ? b[j--] - '0' : 0;
        int sum = digitA + digitB + carry;
        carry = sum / 10;
        result.insert(result.begin(), (sum % 10) + '0');
    }

    return result;
}

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    if (n == 0) {
        cout << "0\n";
        return 0;
    }
    if (n == 1) {
        cout << "1\n";
        return 0;
    }

    vector<string> fib(n + 1);
    fib[0] = "0";
    fib[1] = "1";

    for (int i = 2; i <= n; i++) {
        fib[i] = addStrings(fib[i - 1], fib[i - 2]);
    }

    cout << fib[n];
    return 0;
}
