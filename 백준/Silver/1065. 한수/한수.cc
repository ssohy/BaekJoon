#include <iostream>
using namespace std;
int main()
{
    int N = 0, cnt = 0, one = 0, ten = 0, hund = 0;
    cin >> N;
    for(int i = 1; i <= N; i++){
        if(i <= 99) cnt++;
        if(i >= 100 && i < 1000){
            one = i % 10;
            ten = (i / 10) % 10;
            hund = (i / 100) % 10;
            if(one - ten == ten - hund) cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}