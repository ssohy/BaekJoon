#include <iostream>
using namespace std;

int main()
{
    int N = 0, M = 0;
    cin >> N >> M;
    int A[N][M];
    int B[N][M];
    int result[N][M];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> A[i][j];
        }
    }
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> B[i][j];
        }
    }
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cout << A[i][j] + B[i][j] << " "; 
        }
        cout << '\n';
    }
    return 0;
}