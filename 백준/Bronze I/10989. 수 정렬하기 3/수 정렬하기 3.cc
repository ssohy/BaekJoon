#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int N = 0, tmp = 0;
    int arr[10001] = {0};
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> tmp;
        arr[tmp] += 1;
        
    }

    for(int i = 1 ; i <= 10000; i++)
        for (int j = 0; j < arr[i]; j++)
            cout << i << '\n';
    return 0;
}