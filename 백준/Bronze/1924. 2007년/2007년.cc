#include <iostream>
using namespace std;

int main()
{
    int x = 0, y = 0, cnt = 0;
    cin >> x >> y;
    if(x >= 2){
        cnt += 31;
    }
    if(x >= 3){
        cnt += 28;
    }
    if(x >= 4){
        cnt += 31;
    }
    if(x >= 5){
        cnt += 30;
    }
    if(x >= 6){
        cnt += 31;
    }
    if(x >= 7){
        cnt += 30;
    }
    if(x >= 8){
        cnt += 31;
    }
    if(x >= 9){
        cnt += 31;
    }
    if(x >= 10){
        cnt += 30;
    }
    if(x >= 11){
        cnt += 31;
    }
    if(x >= 12){
        cnt += 30;
    }
    
    cnt += y;
    
    if(cnt % 7 == 1){
        cout << "MON";
    } else if(cnt % 7 == 2){
        cout << "TUE";
    } else if(cnt % 7 == 3){
        cout << "WED";
    } else if(cnt % 7 == 4){
        cout << "THU";
    } else if(cnt % 7 == 5){
        cout << "FRI";
    } else if(cnt % 7 == 6){
        cout << "SAT";
    } else if(cnt % 7 == 0){
        cout << "SUN";
    }
    
    
    return 0;
}