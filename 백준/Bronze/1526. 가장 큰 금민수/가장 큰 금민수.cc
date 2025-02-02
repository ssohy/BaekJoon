#include <iostream>
using namespace std;

int main()
{
    string N = "";
    int tmp = 0;
    bool isGuem = false;
    
    cin >> N;
    while(true){
        for(int i = N.length() - 1; i >= 0; i--){
            if(N[i] == '4' || N[i] == '7') {
                if(i == 0) isGuem = true;
                continue;
            }
            else {
                tmp = stoi(N);
                tmp--;
                N = to_string(tmp);
                break;
            }
        }
        if(isGuem) break;
    }
    cout << N;
    return 0;
}
