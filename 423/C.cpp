#include <iostream>
#include <tuple>
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

	int n, r;
	cin >> n >> r;
	vector<int> left(r), right(n - r);

	rep(i, r) {
		cin >> left[i];
	}
	for (int i = 0; i <= n - r; ++i) {
		cin >> right[i];
	}

	bool zeroexist = false;
	int start = 0, cnt = 0, ans = 0;
	rep(i, r) {
		if (~zeroexist && left[i] == 0) {
			zeroexist = true;
			start = i;
		} else if (zeroexist && left[i] == 1) {
			cnt += 1;
		}
	}
	ans += cnt + r - start;

	zeroexist = false;
	start = 0, cnt = 0;
	for (int i = 0; i <= n - r; ++i) {
		if (~zeroexist && right[i] == 0) {
			zeroexist = true;
			start = i;
		} else if (zeroexist && right[i] == 1) {
			cnt += 1;
		}
	}
	ans += cnt + n - r - start;
	cout << ans << el;
}
