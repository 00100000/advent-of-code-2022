#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include <algo/debug.h>
#endif

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int maxSum = 0;
	int sum = 0;
	string s;
	do {
		getline(cin, s);
		if (s.compare("") == 0) {
			maxSum = max(maxSum, sum);
			sum = 0;
		} else {
			sum += stoi(s);
		}
	} while (s.compare("-1") != 0);

	cout << maxSum;
	return 0;
}
