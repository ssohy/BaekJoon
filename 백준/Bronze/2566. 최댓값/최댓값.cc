#include <iostream>
using namespace std;

int main()
{
    int max = -1, cur = 0, col = 0, row = 0; 
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            cin >> cur;
            if(cur > max){
                max = cur;
                row = i + 1;
                col = j + 1;
            }
        }
    }
        
            
    cout << max << "\n" << row << " " << col;
    
    return 0;
}