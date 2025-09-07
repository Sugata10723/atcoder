#include <cstddef>
#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

long double _calc_filling(string s) {
  int cnt = 0;
  if (s.front() == 't' && s.back() == 't' && (s.size()) >= 3) {
    for (int i = 0; i < (s.size()); i++) {
      if (s[i] == 't') {
        cnt += 1;
      }
    }
    return (long double)(cnt - 2) / ((s.size()) - 2);
  } else {
    return 0;
  }
}

int main() {
  string x;
  cin >> x;
  long double max_f = 0;

  if (x.size() < 3) {
    ;
  } else {
    for (size_t i = 0; i + 3 <= (x.size()); i++) {
      for (size_t n = 3; i + n <= (x.size()); n++) {
        string s = x.substr(i, n);
        long double f = _calc_filling(s);
        if (f > max_f) {
          max_f = f;
        }
      }
    }
  }
  cout << setprecision(15) << max_f << '\n';
}
