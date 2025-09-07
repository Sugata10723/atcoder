#include <iostream>
#include <vector>
using namespace std;

int dp(vector<int> vec, int n, int cnt) {
  int left=vec.back();
  vec.pop_back();
  for (int i=0; i<n-1; i++) {
    if ((n - (i+1)) == vec[i] + left) {
      cnt++;
    }
  }
  if (n - 1 == 0) {
    return cnt;
  } else {
    return dp(vec, n-1, cnt);
  }
}

int main() {
  // import
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int &val : arr) {
    cin >> val;
  }

  //
  cout << dp(arr, n, 0) << endl;

}
