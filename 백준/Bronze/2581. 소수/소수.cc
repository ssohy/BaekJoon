#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int M = 0, N = 0, sum = 0, cnt = 0;
    vector <int> primeNum;
    cin >> M >> N;
    for(int i = M; i <= N; i++){
        for (int j = 1; j <= i; j++) {
			if (i % j == 0)
				cnt++;
		}
		if (cnt == 2){
		    sum += i;
		    primeNum.push_back(i);
		}

		cnt = 0;
        
    }
    if(primeNum.size() == 0)
        cout << -1;
    else cout << sum << "\n" << primeNum[0];
    return 0;
}
