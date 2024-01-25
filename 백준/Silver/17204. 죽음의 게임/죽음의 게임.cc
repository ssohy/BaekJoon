#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N = 0, K = 0, ans = 0, tmp = 0;
	cin >> N >> K;
	vector<int> arr(N);
	vector<bool> B(N);
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	tmp = arr[0];
	while (B[tmp] != true)
	{
		ans++;
		B[tmp] = true;
		if (tmp == K)
		{
			cout << ans << endl;
			return 0;
		}
		tmp = arr[tmp];
		
	}
	cout << -1 << endl;
	
	return 0;


}