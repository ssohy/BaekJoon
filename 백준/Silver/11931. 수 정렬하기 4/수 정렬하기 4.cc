#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
	cin.tie(0);
    int N = 0;
    cin >> N;
    vector<int> num(N);
    for(int i; i < N; i++)
        cin >> num[i];
    sort(num.rbegin(), num.rend());
    for(int i; i < N; i++)
        cout << num[i] << '\n';
    return 0;
}