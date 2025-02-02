#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int n = 0, tmp = 0, start = 0, end = 0;
    double sum = 0;
    vector <int> opinion;
    
    cin >> n;
    if(n == 0) {
        cout << 0;
        return 0;
    }
    while(n--){
        cin >> tmp;
        opinion.push_back(tmp);
    }
    
    sort(opinion.begin(), opinion.end());
    
    start = round(opinion.size()*0.15);
    end = opinion.size() - start;

    for(int i = start; i < end; i++)
        sum += opinion[i];

    cout << round(sum / (opinion.size() - start*2));
    return 0;
}
