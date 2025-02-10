#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string str = "";
    int small = 0, big = 0, num = 0, space = 0;
    while(getline(cin, str)){
        for(int i = 0; i < str.length(); i++){
            if(str[i] >= 'a' && str[i] <= 'z')
                small++;
            else if(str[i] >= 'A' && str[i] <= 'Z')
                big++;
            else if(str[i] >= '0' && str[i] <= '9')
                num++;
            else if(str[i] == ' ')
                space++;
        }
        cout << small << " " << big << " " << num << " " << space << "\n";
        small = 0, big = 0, num = 0, space = 0;
    }
    
    return 0;
}
