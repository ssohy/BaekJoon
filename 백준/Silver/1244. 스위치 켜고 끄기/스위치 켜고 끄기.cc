#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N = 0, tmp = 0, stu = 0, gender = 0, left = 0, right = 0;
    cin >> N;
    vector<int> switchs(N+1);
    for(int i = 1; i <= N; i++)
        cin >> switchs[i];
    
    cin >> stu;
    
    while(stu--){
        cin >> gender >> tmp;
        if(gender == 1)
        {
            for(int j = 1; j <= N; j++)
                if(j % tmp == 0)
                    switchs[j] = 1 - switchs[j];
        }
        else if(gender == 2)
        {
            left = tmp - 1;
            right = tmp + 1;
            
            while((left >= 1) && (right <= N)){
                if(switchs[left] == switchs[right]){
                    left--;
                    right++;
                }else break;
            }
            for(int k = left + 1; k < right; k++)
                switchs[k] = 1 - switchs[k];
        }
    }
    
    for(int i = 1; i <= N; i++){
        cout << switchs[i] << " ";
        if(i%20==0)
            cout<< endl;
    }
    return 0;
}
