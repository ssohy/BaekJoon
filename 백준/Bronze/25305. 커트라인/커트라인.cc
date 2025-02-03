#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N = 0, k = 0, tmp = 0;
    vector <int> score;
    
    cin >> N >> k;
    while(N--){
        cin >> tmp;
        score.push_back(tmp);
    }
    
    sort(score.rbegin(), score.rend());
    cout << score[k - 1];
    
    return 0;
}
