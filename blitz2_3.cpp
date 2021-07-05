#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, a, b;
	cin >> n >> a >> b;

	int totalTime = 180 + 180 + n * 2;
	int duration = totalTime - a - b;
	cout << duration << '\n';
}

int main() {
	int t = 1;
	cin >> t;
	while (t--)
		solve();
	return 0;
}