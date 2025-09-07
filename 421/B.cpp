#include <iostream>
#include <string>
#include <vector>
using namespace std;

long int rev(long int x) {
  string x_str = to_string(x);
  string x_rev;
  for (int i = 0; i < x_str.size(); i++) {
    if (x_rev.size() == 0 && x_str[i] == 0) {
      ;
    } else {
      x_rev = x_str[i] + x_rev; 
    }
  }
  long int xx = stol(x_rev);
  return xx;
}

int main() {
  vector<long int> fiv(10);
  cin >> fiv[0] >> fiv[1];

  for (int i = 2; i < 10; i++) {
    fiv[i] = rev(fiv[i-1]+fiv[i-2]);
  }
  cout << fiv[9] << endl;
}
