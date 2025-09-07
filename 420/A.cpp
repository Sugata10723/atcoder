#include <iostream>
#include <string>
using namespace std;

int main() {
  int x, y, z;
  cin >> x >> y;
  z = x + y;
  if (z > 12) {
    cout << z - 12 << endl;
  } else {
    cout << z << endl;
  }
}
