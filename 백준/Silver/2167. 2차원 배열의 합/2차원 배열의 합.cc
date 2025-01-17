#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int N = 0, M = 0, K = 0, i = 0, j = 0, x = 0, y = 0, result = 0;
    vector<vector <int>> A(300, vector<int> (300,0));

    cin >> N >> M;
    for(int p = 0; p < N; p++){
        for(int q = 0; q < M; q++){
            cin >> A[p][q];
        }
    }
    cin >> K;
    while(K--){
        cin >> i >> j >> x >> y;
        for(int p = i - 1; p < x; p++)
            for(int q = j - 1; q < y; q++)
                result += A[p][q];
                
        cout << result << "\n";
        result = 0;
    }
    return 0;
}
