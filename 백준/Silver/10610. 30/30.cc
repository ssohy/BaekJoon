#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string N;
    cin >> N;

    vector<int> num;
    int sum = 0;
    bool hasZero = false;

    // 숫자를 벡터에 저장하고 합 계산
    for (char digit : N) {
        int digitValue = digit - '0';
        sum += digitValue;
        num.push_back(digitValue);
        if (digitValue == 0) hasZero = true;
    }

    // 30의 배수 조건 확인
    if (sum % 3 != 0 || !hasZero) {
        cout << -1;
        return 0;
    }

    // 가장 큰 수 만들기 위해 내림차순 정렬
    sort(num.rbegin(), num.rend());

    // 결과 출력
    for (int digit : num) {
        cout << digit;
    }

    return 0;
}
