#include <iostream>
#include <string>
using namespace std;

int main() {
  long long int n;
  cin >> n;
  string s;
  cin >> s;

  long long int cnt = 0, val = 0, flag = 0;
  for (long long int pointer = 0; pointer < 2 * n; pointer++) {
    if (flag == 0) {
      if (s[pointer] == 'A') {
        flag = 1;
      } else if (s[pointer] == 'B') {
        flag = -1;
      }
    }

    if (flag == 1) {
      if (s[pointer] == 'A') {
        if (val >= 0) {
            val += 1;
        } else {
            cnt += -val;
            val += 1;
        }
      } else if (s[pointer] == 'B') {
        if (val <= 0) {
            val -= 1;
        } else {
            cnt += val - 1;
            val -= 1;
        }
      }
    } else if (flag == -1) {
        if (s[pointer] == 'A') {
          if (val >= 0) {
              val += 1;
          } else {
            cnt += -val - 1;
            val += 1;
          }
        } else if (s[pointer] == 'B') {
          if (val <= 0) {
            val -= 1;
          } else {
            cnt += val;
            val -= 1;
          }
        }
    }
  }
  cout << cnt << endl;
}
