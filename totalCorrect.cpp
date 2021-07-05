#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	map<string, int> M;
	for (int i = 0; i < n * 3; i++) {
		string s;  int c;
		cin >> s >> c;
		M[s] += c;
	}
	vector<int> submissions;
	for (auto i : M) {
		submissions.push_back(i.second);
	}
	sort(submissions.begin(), submissions.end());
	for (int s : submissions)
		cout << s << ' ';
	cout << '\n';
}

int main() {
	int t = 1;
	cin >> t;
	while (t--)
		solve();
	return 0;
}