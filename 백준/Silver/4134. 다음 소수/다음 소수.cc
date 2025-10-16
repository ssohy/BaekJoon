#include <iostream>
using namespace std;

// 소수인지 판별하는 함수
bool isPrime(long long num) {
    // 1. 2보다 작은 수는 소수가 아님
    if (num < 2) {
        return false;
    }
    // 2. 2는 유일한 짝수 소수
    if (num == 2) {
        return true;
    }
    // 3. 2를 제외한 모든 짝수는 소수가 아님
    if (num % 2 == 0) {
        return false;
    }
    // 4. 3부터 √num 까지의 홀수만 검사
    for (long long i = 3; i * i <= num; i += 2) {
        if (num % i == 0) {
            return false; // 나누어 떨어지면 소수가 아님
        }
    }
    return true; // 루프를 통과하면 소수임
}


int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long T = 0, n = 0;
    cin >> T;
    while(T--){
      cin >> n;

        // n이 0, 1, 2인 경우 가장 작은 소수인 2를 바로 출력
        if (n <= 2) {
            cout << 2 << '\n';
            continue;
        }

        long long findNum = n;
        while (true) {
            if (isPrime(findNum)) {
                cout << findNum << '\n';
                break; // 소수를 찾았으므로 루프 종료
            }
            findNum++; // 소수가 아니면 다음 수로 이동
        }
    }
    
    return 0;
}