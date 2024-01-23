#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int N = 0, K = 0, tmp = 0, index = 0, cnt = 0;
    cin >> N >> K;
    vector<int> type;
    for(int i = 0; i < N; i++){
        cin >> tmp;
        type.push_back(tmp);
    }
    
    for(int i = N - 1; i >= 0; i--){
        if(type[i] <= K){
            index = i;
            break;
        }
    }
    for(int i = index; i >= 0; i--){
        cnt += (K / type[i]);
        K = K % type[i];
    } 
    cout << cnt << endl;
    return 0;
}
