#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    string N = "";
    int cnt = 0, cal = 0;
    int num[10] = {0};
    cin >> N;
    for(int i = 0; i < N.length(); i++){
      num[N[i] - '0']++;
    }
    cal = (num[6] + num[9]) / 2 + (num[6] + num[9]) % 2;
    num[6] = cal;
    num[9] = cal;
    sort(num, num + 10);
    cout << num[9];
    return 0;
}