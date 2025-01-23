#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    string N = "";
    int sum = 0;
    vector <int> num;
    
    cin >> N;

    for(int i = 0; i < N.length(); i++){
        sum += (N[i] - '0');
        num.push_back(N[i] - '0');
    }
    
    sort(num.rbegin(), num.rend());
    
    if((sum % 3 == 0) && (num[num.size()-1] == 0))
        for(int i = 0; i < num.size(); i++)
            cout << num[i];
    else
        cout << -1;
    
    return 0;
}
