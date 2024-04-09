#include <iostream>
using namespace std;

int main()
{
    int N = 0;
    string firstGap = "", midGap = "";
    cin >> N;
    for(int i = 0; i < N; i++){
        firstGap = "";
        midGap = "";
        for(int j = i; j < N - 1; j++)
            firstGap += " ";
        cout << firstGap << "*";
        if(i == N - 1){
            for(int j = 0; j < 2 * N - 2; j++)
                cout << "*";
                break;
        }
        for(int j = 0; j < 2 * i - 1; j++)
            midGap += " ";
        if(i != 0)
            cout << midGap << "*" << '\n';
        else
            cout << '\n';
    }

    return 0;
}