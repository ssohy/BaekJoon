#include <iostream>
using namespace std;

int main()
{
    int max = 0, sum = 0, human = 0, score = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 4; j++){
            cin >> score;
            sum += score;
        }
        if(max < sum){
            max = sum;
            human = i + 1;
        }
        sum = 0;
    }
    cout << human << " " << max;
    return 0;
}