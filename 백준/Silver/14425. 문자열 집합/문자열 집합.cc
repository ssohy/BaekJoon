#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int N = 0, M = 0, cnt = 0;
    string str = "";
    unordered_set<string> S;
    
    cin >> N >> M;
    
    while (N--) {
        cin >> str;
        S.insert(str);
    }
    
    while (M--) {
        cin >> str;
        if (S.find(str) != S.end())
            cnt++;
    }
    
    cout << cnt;
    
    return 0;
}
