#include <iostream>
#include <vector>
#include <numeric>
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

	ll n, q;
	cin >> n >> q;

	vector<ll> array(n);
	std::iota(array.begin(), array.end(), 1);
	ll start = 0;

	rep(i, q) {
		int query;
		cin >> query;
		if (query == 1) {
			ll p, x;
			cin >> p >> x;
			array[(start + p - 1) % n] = x;
		} else if (query == 2) {
			ll p;
			cin >> p;
			cout << array[(start + p - 1) % n] << el;
		} else if (query == 3) {
			ll k;
			cin >> k;
			start = (start + k) % n;
		}
	}
}
