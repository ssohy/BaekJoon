#include <iostream>
#include <map>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N = 0, M = 0, tmp = 0;
    map<int, int> result;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> tmp;
        result[tmp]++;
    }
    cin >> M;
    for(int i = 0; i < M; i++){
        cin >> tmp;
        cout << result[tmp] << " ";
    }
    return 0;
}