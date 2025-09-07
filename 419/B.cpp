#include <functional>
#include <iostream>
#include <queue>
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

	int q;
	cin >> q;

	priority_queue<int, vector<int>, greater<int>> hukuro = {};
	rep(i, q) {
		int query = 0, number = 0;
		cin >> query;

		if (query == 1) {
			cin >> number;
			hukuro.push(number);
		} else if (query == 2) {
			cout << hukuro.top() << el;
			hukuro.pop();
		}
	}
}
