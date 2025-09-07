#include <iostream>
#include <string>
using namespace std;

int main() {
  int n, a, b, d;
  string c;
  cin >> n >> a >> b;
  cin >> c;
  d = c.size() - (a + b);
  cout << c.substr(a, d)<< endl;
}
