#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
	cin.tie(0);
    int N = 0, x = 0, tmp = 0;
    int cmd = 0;
    stack<int> s;
    
    cin >> N;
    
    while(N--){
        cin >> cmd;
        if (cmd == 1) {
            cin >> x;
            s.push(x);
        } else if (cmd == 2) {
            if(s.size() == 0) 
            	cout << -1 << '\n';
            else {
                tmp = s.top();
				cout << tmp << '\n';
				s.pop();
            }
        } else if (cmd == 3) {
            cout << s.size() << '\n';
        } else if (cmd == 4) {
            if(s.size() == 0) 
            	cout << 1 << '\n';
            else 
            	cout << 0 << '\n';
        } else if (cmd == 5) {
            if(s.size() == 0) 
            	cout << -1 << '\n';
            else 
            	cout << s.top() << '\n';
        }
    }
    return 0;
}