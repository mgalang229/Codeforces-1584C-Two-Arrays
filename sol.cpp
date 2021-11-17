#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> a(n), b(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for (int i = 0; i < n; i++) {
			cin >> b[i];
		}
		// sort both of the sequences in non-decreasing order
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		// check if the difference of every pairs of numbers in both sequences
		// contain a difference of 0 (same value) or 1 (just need to add one)
		// note: don't forget to check if all the values of the first sequence
		// is less than or equal to all the values in the second sequence
		bool checker = true;
		for (int i = 0; i < n; i++) {
			checker &= (abs(a[i] - b[i]) <= 1 && a[i] <= b[i]);
		}
		cout << (checker ? "YES" : "NO") << '\n';
	}
	return 0;
}
