#include <iostream>
using namespace std;

int main()
{
    int T = 0, A = 0, B = 0;
    cin >> T;
    for(int i = 0; i < T; i++){
        cin >> A >> B;
        cout << "Case #" << i + 1 << ": " << A + B << "\n";
    }

    return 0;
}
