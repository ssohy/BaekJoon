#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N = 0, M = 0, num = 0;
    cin >> N;

    vector<int> sang(N);
    for(int i = 0; i < N; i++)
        cin >> sang[i];

    sort(sang.begin(), sang.end());
    cin >> M;
    for(int i = 0; i < M; i++){
        cin >> num;
        cout << binary_search(sang.begin(), sang.end(), num) << " ";
    }
    
    return 0;
}
