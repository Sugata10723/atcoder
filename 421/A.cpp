#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<string> mansion(n);
  for (int i = 0; i < n; i++) {
    cin >> mansion[i];
  }
  int floor;
  string name;
  cin >> floor >> name;

  if (mansion[floor - 1] == name) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
    }
}
