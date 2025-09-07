#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;
  string text;
  cin >> text;
  string tea = "tea";

  if (n == 2) {
    cout << "No" << endl;
  } else if (text.rfind(tea) == n-3) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
