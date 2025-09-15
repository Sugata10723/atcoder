#include <iostream>
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

	ll x, c;
	cin >> x >> c;
	int ans;

	ans = x / (1000 + c);
	cout << ans * 1000 << el;
}
