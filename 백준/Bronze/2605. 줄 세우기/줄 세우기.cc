#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N = 0, num = 0; 
	cin >> N;
	vector<int> order(N);

	for (int i = 1; i <= N; i++) {
		cin >> num;
		order.insert(order.begin() + num, i);
	}

	for (int i = N - 1; i >= 0; i--) 
	    cout << order[i] << ' ';
	    
	return 0;
}
