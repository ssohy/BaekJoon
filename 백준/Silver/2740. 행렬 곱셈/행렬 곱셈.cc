#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int N = 0, M = 0, K = 0, result = 0;
    vector<vector <int>> A(100, vector<int> (100,0)), B(100, vector<int> (100,0));

    cin >> N >> M;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> A[i][j];
        }
    }

    cin >> M >> K;
    for(int i = 0; i < M; i++){
        for(int j = 0; j < K; j++){
            cin >> B[i][j];
        }
    }
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < K; j++){
            for(int tmp = 0; tmp < M; tmp++){
                result += (A[i][tmp] * B[tmp][j]);
            }
            cout << result << " ";
            result = 0;
        }
        cout << "\n";
    }
    return 0;
}