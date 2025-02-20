#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int N = 0, M = 0, tmp = 0, i = 0, j = 0;
    vector <int> num;
    
    cin >> N >> M;
    
    for(int k = 0; k < N; k++){
        cin >> tmp;
        num.push_back(tmp);
    }
    
    for(int k = 1; k < N; k++)
        num[k] += num[k - 1];
        
    while(M--){
        cin >> i >> j;
 
        cout << num[j - 1] - num[i - 2] << '\n';
    }
    return 0;
}