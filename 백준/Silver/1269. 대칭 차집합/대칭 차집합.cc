#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int symDifOfSet(vector<int> x, vector<int> y){
    int cnt = 0, i = 0, j = 0;
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());
    while (i < x.size() && j < y.size()) {
        if (x[i] < y[j]) {
            cnt++;
            i++;
        } else if (x[i] > y[j]) {
            cnt++;
            j++;
        } else {
            i++;
            j++;
        }
    }
    cnt += x.size() - i;
    cnt += y.size() - j;
    return cnt;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int A = 0, B = 0, result = 0;
    cin >> A >> B;
    vector<int> a(A), b(B);
    for(int i = 0; i < A; i++)
        cin >> a[i];
    for(int i = 0; i < B; i++)
        cin >> b[i];
    result = symDifOfSet(a, b);
    cout << result << '\n';
    return 0;
}