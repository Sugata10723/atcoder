#include <iostream>
#include <vector>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define el '\n'
using namespace std;
using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	vector<int> door(n);

	rep(i, n) {
		cin >> door[i];
	}

	bool yet = true, yet_end = true;
	int cnt = 0, cnt_end = 0, ans = 0;
	rep(i, n) {
		if (yet && door[i] == 1) {
			cnt = i + 1;
			yet = false;
		}
		if (yet_end && door[n - (i + 1)] == 1) {
			cnt_end = (i + 1);
			yet_end = false;
		}
	}
	if (yet && yet_end) {
		ans = 0;
	} else {
		ans = n + 1 - (cnt + cnt_end);
	}
	cout << ans << el;
}
