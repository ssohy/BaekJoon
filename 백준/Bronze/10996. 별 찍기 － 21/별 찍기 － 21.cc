#include <iostream>
using namespace std;

int main()
{
    int N = 0;
    string evenStar = "", oddStar = "";
    cin >> N;
    for(int i = 0; i < N; i++){
        if(i % 2 == 0)
            evenStar += "* ";
        else
            oddStar += " *";
    }
    for(int i = 0; i < N; i++){
        cout << evenStar << '\n' << oddStar << '\n';
    }
    return 0;
}