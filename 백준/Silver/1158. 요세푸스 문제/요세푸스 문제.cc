#include <iostream>
#include <queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int N = 0, K = 0;
    queue <int> Josephus;
    cin >> N >> K;
    for(int i = 1; i <= N; i++)
        Josephus.push(i);
    cout << "<";

    while(!Josephus.empty()){

        for(int i = 0; i < K - 1; i++){
            Josephus.push(Josephus.front());
            Josephus.pop();
        }
        
        cout << Josephus.front();
        if(Josephus.size() != 1)
             cout << ", ";
        Josephus.pop();
    }
    cout << ">";

    return 0;
}