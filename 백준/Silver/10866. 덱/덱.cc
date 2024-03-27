#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N = 0, num = 0;
    deque <int> deq;
    string cmd = "";
    cin >> N;
    while(N--){
        cin >> cmd;
        if(cmd == "push_front"){
            cin >> num;
            deq.push_front(num);
        }
        else if(cmd == "push_back"){
            cin >> num;
            deq.push_back(num);
        }
        else if(cmd == "pop_front"){
            if(deq.empty()) 
                cout << -1 << '\n';
            else{
                cout << deq.front() << '\n';
                deq.pop_front();
            }
        }
        else if(cmd == "pop_back"){
            if(deq.empty()) 
                cout << -1 << '\n';
            else{
                cout << deq.back() << '\n';
                deq.pop_back();
            }
            
        }
        else if(cmd == "size"){
            cout << deq.size() << '\n';
        }
        else if(cmd == "empty"){
            if(deq.empty()) 
                cout << 1 << '\n';
            else
                cout << 0 << '\n';
        }
        else if(cmd == "front"){
            if(deq.empty()) 
                cout << -1 << '\n';
            else
                cout << deq.front() << '\n';
        }
        else if(cmd == "back"){
            if(deq.empty()) 
                cout << -1 << '\n';
            else
                cout << deq.back() << '\n';
        }
    }

    return 0;
}