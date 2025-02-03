#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int N = 0, cnt = 0;
    string str = "";
    stack <char> goodWord;
    
    cin >> N;
    
    while(N--){
        cin >> str;
        for(int i = 0 ; i < str.length(); i++){
            if(!goodWord.empty())
                if(goodWord.top() == str[i])
                    goodWord.pop();
                else goodWord.push(str[i]);
            else goodWord.push(str[i]);
        }
        
        if(goodWord.empty()){
            cnt++;
        }
            
        while(!goodWord.empty()) goodWord.pop();
    }
    
    cout << cnt;
    
    return 0;
}
