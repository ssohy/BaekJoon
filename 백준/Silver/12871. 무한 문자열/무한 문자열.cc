#include <iostream>
using namespace std;

// 최대공약수
int gcd(int a, int b){
    while(b != 0){
        int tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

// 최소공배수
int lcm(int a, int b){
    return a * b / gcd(a, b);
}

bool f(const string& str1, const string& str2){
    int len1 = str1.size();
    int len2 = str2.size();
    int len = lcm(len1, len2);  // 최소공배수 길이까지 반복 비교

    for(int i = 0; i < len; i++){
        if(str1[i % len1] != str2[i % len2])
            return false;
    }
    return true;
}

int main() {
    string s, t;
    cin >> s >> t;
    cout << f(s, t);
    return 0;
}
