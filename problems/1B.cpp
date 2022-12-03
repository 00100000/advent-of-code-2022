#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include <algo/debug.h>
#endif

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> v;
	int sum = 0;
	string s;
	do {
		getline(cin, s);
		if (s.compare("") == 0) {
			v.push_back(sum);
			sum = 0;
		} else {
			sum += stoi(s);
		}
	} while (s.compare("-1") != 0);
	sort(v.begin(), v.end());

	int n = (int)v.size() - 1;
	cout << v[n] + v[n - 1] + v[n - 2];
	return 0;
}
