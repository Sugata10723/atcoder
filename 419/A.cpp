#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string s, answer;
	cin >> s;

	if (s == "red") {
		answer = "SSS";
	} else if (s == "blue") {
		answer = "FFF";
	} else if (s == "green") {
		answer = "MMM";
	} else {
		answer = "Unknown";
	}

	cout << answer << '\n';
}
