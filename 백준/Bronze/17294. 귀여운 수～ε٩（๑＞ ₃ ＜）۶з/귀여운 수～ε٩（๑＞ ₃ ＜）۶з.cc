#include <iostream>
using namespace std;
int main(){
    int tmp = 0, n = 0, gap = 0;
    int num[20];
	long long k;
	cin >> k;
	while(k > 0){
		tmp = k % 10;
		k = k / 10;
		num[n] = tmp;
		n++;
	}
	
	gap = num[0] - num[1];
	
	for(int i = 1; i < n; i++){
		if(num[i-1] - num[i] != gap){
			cout << "흥칫뿡!! <(￣ ﹌ ￣)>";	
			return 0;
		}
	}
	cout << "◝(⑅•ᴗ•⑅)◜..°♡ 뀌요미!!";
	return 0;
}