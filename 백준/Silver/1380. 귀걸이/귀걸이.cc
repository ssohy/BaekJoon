#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int n, scenario = 1;
    string name;
    while (true) {
        cin >> n;
        if (n == 0) break;

        vector<string> names(n+1);
        unordered_map<int, char> earrings;

        for (int i = 1; i <= n; ++i) {
            cin >> ws;
            getline(cin, names[i]);
        }
        for (int i = 0; i < 2*n-1; ++i) {
            int num;
            char earringType;
            cin >> num >> earringType;
            if (earrings.find(num) == earrings.end()) {
                earrings[num] = earringType;
            } else if (earrings[num] != earringType) {
                earrings.erase(num);
            }
        }

        for (auto& e : earrings) {
            cout << scenario << " " << names[e.first] << endl;
        }
        ++scenario;
    }
    return 0;
}