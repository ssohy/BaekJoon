#include <iostream>
#include <stack>
using namespace std;

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    string str = "";
    stack<char> bracket;
    getline(cin, str);

    while (str != ".") {
        bool isBalanced = true;
        for (int i = 0; i < str.length(); i++) {
            if (str[i] == '(' || str[i] == '[')
                bracket.push(str[i]);

            else if (str[i] == ')') {
                if (!bracket.empty() && bracket.top() == '(')
                    bracket.pop();
                else {
                    isBalanced = false;
                    break;
                }
            }

            else if (str[i] == ']') {
                if (!bracket.empty() && bracket.top() == '[')
                    bracket.pop();
                else {
                    isBalanced = false;
                    break;
                }
            }
        }

        if (isBalanced && bracket.empty())
            cout << "yes" << '\n';
        else
            cout << "no" << '\n';

        while (!bracket.empty()) bracket.pop();
        getline(cin, str);
    }

    return 0;
}
