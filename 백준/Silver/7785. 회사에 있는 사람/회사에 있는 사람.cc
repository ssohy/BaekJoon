#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
    int n;
    string name = "", status = "";
    map<string, string> log;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> name >> status;
        log[name] = status;
    }

    vector<string> inside;
    for (auto& entry : log) {
        if (entry.second == "enter") {
            inside.push_back(entry.first);
        }
    }

    sort(inside.rbegin(), inside.rend());

    for (const string& person : inside) {
        cout << person << '\n';
    }

    return 0;
}
