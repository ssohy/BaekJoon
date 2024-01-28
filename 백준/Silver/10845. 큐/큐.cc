#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int N = 0, x = 0, tmp = 0;
    string cmd = "";
    queue<int> q;
    cin >> N;
    while(N--){
        cin >> cmd;
        if (cmd == "push") {
            cin >> x;
            q.push(x);
        } else if (cmd == "pop") {
            if(q.size() == 0) 
            	cout << -1 << endl;
            else {
                tmp = q.front();
				cout << tmp << endl;
				q.pop();
            }
        } else if (cmd == "size") {
            cout << q.size() << endl;
        } else if (cmd == "empty") {
            if(q.size() == 0) 
            	cout << 1 << endl;
            else 
            	cout << 0 << endl;
        } else if (cmd == "front") {
            if(q.size() == 0) 
            	cout << -1 << endl;
            else 
            	cout << q.front() << endl;
        } else if(cmd == "back"){
            if(q.size() == 0) 
            	cout << -1 << endl;
            else 
            	cout << q.back() << endl;
        }
    }
    return 0;
}
