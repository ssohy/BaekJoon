#include <iostream>
#include <queue>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
    int N = 0, x = 0;
    string cmd = "";
    queue<int> q;
    
    cin >> N;
    
    for (int i = 0; i < N; i++){
        cin >> cmd;
        if (cmd == "push") {
            cin >> x;
            q.push(x);
        } 
        else if (cmd == "pop") {
            if(q.empty()) 
            	cout << -1 << '\n';
            else {
				cout << q.front() << '\n';
				q.pop();
            }
        } 
        else if (cmd == "size") {
            cout << q.size() << '\n';
        } 
        else if (cmd == "empty") {
            if(q.empty()) 
            	cout << 1 << '\n';
            else 
            	cout << 0 << '\n';
        } 
        else if (cmd == "front") {
            if(q.empty()) 
            	cout << -1 << '\n';
            else 
            	cout << q.front() << '\n';
        } 
        else if(cmd == "back"){
            if(q.empty()) 
            	cout << -1 << '\n';
            else 
            	cout << q.back() << '\n';
        }
    }
    
    return 0;
}