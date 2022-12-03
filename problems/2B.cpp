#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include <algo/debug.h>
#endif

int main() {
	freopen("rps.in", "r", stdin);

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	map<pair<char, char>, int> pts = {
		{{'X', 'A'}, 3 + 0},
		{{'X', 'B'}, 1 + 0},
		{{'X', 'C'}, 2 + 0},
		{{'Y', 'A'}, 1 + 3},
		{{'Y', 'B'}, 2 + 3},
		{{'Y', 'C'}, 3 + 3},
		{{'Z', 'A'}, 2 + 6},
		{{'Z', 'B'}, 3 + 6},
		{{'Z', 'C'}, 1 + 6}
	};
	int sum = 0;
	string s;
	while (1) {
		getline(cin, s);
		if (s.compare("") != 0) sum += pts[{s.at(2), s.at(0)}];
		else break;
	}

	cout << sum;
	return 0;
}

