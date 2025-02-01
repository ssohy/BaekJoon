#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct score {
	string name;
	int ko, eng, math;
};

bool cmp(score a, score b) {
	if (a.ko == b.ko && a.eng == b.eng && a.math == b.math) {
		return a.name < b.name;
	}
	else if (a.ko == b.ko && a.eng == b.eng) {
		return a.math > b.math;
	}
	else if (a.ko == b.ko) {
		return a.eng < b.eng;
	}
	else {
		return a.ko > b.ko;
	}
}

int main() {
	int N = 0, k = 0, e = 0, m = 0;
	string n = "";
	vector<score> v;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> n >> k >> e >> m;
		
		score s;
		s.name = n;
		s.ko = k;
		s.eng = e;
		s.math = m;
		
		v.push_back({ s.name, s.ko, s.eng, s.math });
	}

	sort(v.begin(), v.end(), cmp);

	for (int i = 0; i < N; i++) {
		cout << v[i].name << "\n";
	}

	return 0;
}
