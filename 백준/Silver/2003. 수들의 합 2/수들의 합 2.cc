#include <iostream>
#include <vector>
using namespace std;

int main()
{
    
    int N = 0, M = 0, num = 0, cnt = 0, sum = 0, result = 0;
    vector <int> A;
    cin >> N >> M;
    while(N--){
        cin >> num;
        A.push_back(num);
    }
    
    for(int i = 0; i < A.size(); i++){
        while(sum <= M){
            if(A.size() >= i+cnt)
                sum += A[i+cnt];
            else break;
            if(sum > M) break;
            else if(sum == M){
                result++;
                break;
            }
            else cnt++;
        }
        sum = 0;
        cnt = 0;
    }
    cout << result;
    return 0;
}