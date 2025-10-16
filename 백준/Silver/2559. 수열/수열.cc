#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N = 0, K = 0;
    long long currentSum = 0, maxSum = 0; 
    cin >> N >> K;
    vector<int> tem(N);
    
    for(int i = 0; i < N; i++){
        cin >> tem[i];
    }
    for(int i = 0; i < K; i++){
        currentSum += tem[i];
    }
    
    maxSum = currentSum;
    
    for(int i = K; i < N; i++){
        currentSum = currentSum - tem[i-K] + tem[i];
        maxSum = max(maxSum, currentSum);
    }
    
    cout << maxSum << '\n';
    
    return 0;
}