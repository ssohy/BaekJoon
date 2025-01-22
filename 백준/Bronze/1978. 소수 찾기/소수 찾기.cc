#include <iostream>
using namespace std;

int main()
{
    int N = 0, num = 0, cnt = 0, result = 0;
    cin >> N;
    while(N--){
        cin >> num;
        for(int i = 1; i <= num; i++){
            if(num % i == 0)
                cnt++;
        }
        if(cnt == 2) result++;
        cnt = 0;
    }
    cout << result;
    return 0;
}