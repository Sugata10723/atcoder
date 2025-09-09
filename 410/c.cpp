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

	int n, q;
	cin >> n >> q;

	vector<int> array(n);
	std::iota(array.begin(), array.end(), 0);
	int start = 0;

	rep(i, q) {
		int query;
		cin >> query;
		if (query == 1) {
			int p, x;
			cin >> p >> x;
			array[p - 1] = x;
		} else if (query == 2) {
			int p;
			cin >> p;
			cout << array[(start + p - 1) % n] << el;
		} else if (query == 3) {
			int k;
			cin >> k;
			start = (start + k) % n;
		}
	}
}
