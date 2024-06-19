#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N = 0, M = 0, tmp = 0, max = 0, sum = 0;
    vector<int> card;
    cin >> N >> M;
    
    for(int i = 0; i < N; i++){
        cin >> tmp;
        card.push_back(tmp);
    }
    for(int i = 0; i < N - 2; i++){
        for(int j = i + 1; j < N - 1; j++){
            for(int k = j + 1; k < N; k++){
                sum = card[i] + card[j] + card[k];
                if(sum <= M && max < sum) max = sum;
            }
        }
    }
    cout << max << endl;
    return 0;
}