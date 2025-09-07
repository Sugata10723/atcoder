#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<string> zentai(n);

  for (int i = 0; i < n; i++) {
    cin >> zentai[i];
  }

  string winners;
  for (int i = 0; i < m; i++) {
    int cnt_0 = 0, cnt_1 = 0;

    for (int j = 0; j < n; j++) {
      // count 1 and 0 times.
      if (zentai[j][i] == '1') {
        cnt_1++;
      } else {
        cnt_0++;
      }
    }

    // write winners
    if (cnt_0 == 0 || cnt_1 == 0) {
        winners.push_back('2');
    } else if (cnt_1 < cnt_0) {
        winners.push_back('1');
    } else {
        winners.push_back('0');
    }
  }

  vector<int> champions;
  int max = 0;
  for (int i = 0; i < n; i++) {
    int cnt = 0;
    for (int j = 0; j < m; j++) {
      if (winners[j] =='2' or zentai[i][j] == winners[j]) {
        cnt++;
      }
    }
    if (cnt == max) {
      champions.push_back(i+1);
    } else if (cnt > max) {
      champions.clear();
      champions.push_back(i+1);
      max = cnt;
    }
  }

  for (int i = 0; i < champions.size(); i++) {
    cout << champions[i] << " ";
  }
  cout << endl;
}
