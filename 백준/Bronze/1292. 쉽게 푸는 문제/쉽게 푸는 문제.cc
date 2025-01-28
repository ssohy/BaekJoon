#include <iostream>
using namespace std;

int main()
{
    int A = 0, B = 0, cnt = 0, sum = 0;
    cin >> A >> B;
    for(int i = 1; i <= 1000; i++){
        for(int j = 0; j < i; j++){
            cnt++;
            if(cnt >= A && cnt <= B)
                sum += i;
        }
    }
    cout << sum;
    return 0;
}
