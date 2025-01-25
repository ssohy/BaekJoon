#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n = 0, dd = 0, mm = 0, yyyy = 0;
    string name = "", maxName = "", minName = "";
    cin >> n;
    vector<pair<pair<int, int>, pair<int, string>>> birthday(n);
    for(int i = 0; i < n; i++){
        cin >> birthday[i].second.second >> birthday[i].second.first >> birthday[i].first.second >> birthday[i].first.first;
    
    }
    
    sort(birthday.begin(), birthday.end());
    cout << birthday[n - 1].second.second << "\n" << birthday[0].second.second;
    return 0;
}
