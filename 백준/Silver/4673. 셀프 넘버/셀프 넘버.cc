#include <iostream>
using namespace std;

int d(int n){
    int tmp = n;

    while(n > 0){
        tmp += (n % 10);
        n /= 10;
    }
        
    return tmp;
}

int main()
{
    int result[10001] = {0};
    int num = 0;

    for(int i = 1; i <= 10000; i++){
        num = d(i);
        if(num <= 10000) result[num]++;
    }
    for(int i = 1; i <= 10000; i++){
        if(result[i] == 0) cout << i << '\n';
    }

    return 0;
}