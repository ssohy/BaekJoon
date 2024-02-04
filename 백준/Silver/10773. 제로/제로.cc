#include <iostream>
#include <stack>
using namespace std;
int main()
{
    int k = 0, tmp = 0, sum = 0;
    stack<int> money;
    cin >> k;
    while(k--){
        cin >> tmp;
        if(tmp == 0){
            sum -= money.top();
            money.pop();
        }else{
            money.push(tmp);
            sum += money.top();
        }
    }
    cout << sum << endl;
    return 0;
}