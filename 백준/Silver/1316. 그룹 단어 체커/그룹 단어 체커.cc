#include <iostream>
using namespace std;

int main()
{
    int N = 0, cnt = 0;
    string str = "";
    bool isGroup = true;
    cin >> N;

    while(N--){
        cin >> str;
        for (int i = 0; i < str.length(); i++) {
            for (int j = i + 1; j < str.length(); j++) {
                if (str[j - 1] != str[i] && str[j] == str[i]) {
                    isGroup = false;
                    break;
                }
            }
            if (!isGroup) break;
        }
        if (isGroup) cnt++;
        isGroup = true; // 초기화
    }
    cout << cnt;

    return 0;
}
