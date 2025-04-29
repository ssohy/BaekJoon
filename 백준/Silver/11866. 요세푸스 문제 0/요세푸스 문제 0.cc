#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int N = 0, K = 0, cnt = 0;
    vector<int> arr, Josephus;
    cin >> N >> K;
    for(int i = 1; i <= N; i++){
        arr.push_back(i);
    }
    while(!arr.empty()){
        cnt += (K - 1);
        if(cnt >= arr.size()){
            cnt %= arr.size();
        }
        Josephus.push_back(arr[cnt]);
        arr.erase(arr.begin() + cnt);
    }
    cout << "<";
    for(int i = 0; i < N; i++){
        cout << Josephus[i];
        if(i != N - 1)
            cout << ", ";
        else cout << ">";
    }
    return 0;
}
