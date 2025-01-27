#include <iostream>
using namespace std;

int main()
{
    int N = 0;
    int alphabet[26] = {0};
    bool isMoreThan5 = false;
    string name = "";
    cin >> N;
    while(N--){
        cin >> name;
        alphabet[name[0] - 'a']++;
    }
    
    
    for(int i = 0; i < 26; i++){
        if(alphabet[i] >= 5){
            cout << static_cast<char>(i + 'a');
            isMoreThan5 = true;
        }
    }
        
    if(!isMoreThan5)
        cout << "PREDAJA";
    return 0;
}