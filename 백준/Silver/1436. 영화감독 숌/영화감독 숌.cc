#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int N = 0, cnt = 0, result = 666;
    string cur;
    cin >> N;

    while(true)
    {
        cur = to_string(result);
        for(int i = 0; i < cur.length()-2; i++)
        {
            if(cur[i] == '6' && cur[i+1] == '6' && cur[i+2] == '6')
            {
                cnt++;
                if(cnt == N)
                {
                    cout << result;
                    return 0;
                }
                break;
            }
        }
        result++;
    }
}
