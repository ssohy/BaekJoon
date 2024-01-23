#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool compare(int i, int j){
    return j < i;
}
int main()
{
    int N = 0, M = 0, tmp = 0, max = 0, idx = 0;
    vector<int> order;
    cin >> N >> M;
    for(int i = 0; i < M; i++){
        cin >> tmp;
        order.push_back(tmp);
    }
    sort(order.begin(), order.end(), compare);
    for(int i=0; i<M; i++){
        if(i < N){ 
            if(order[i] * (i+1) > max){
                max = order[i] * (i+1);
                idx = i;
            }
        }else break;
    }
    cout << order[idx] << " " << max << endl;
    return 0;
}
