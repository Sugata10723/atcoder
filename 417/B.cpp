#include <iostream>
#include <vector>
using namespace std;

int main() {
  // import
  int n, m;
  cin >> n >> m;
  vector<int> arr(n), brr(m);
  for (int &val : arr) {
    cin >> val;
  }
  for (int &val : brr) {
    cin >> val;
  }

  // 
  for (int &val_b : brr) {
    for (int i=0;i<arr.size();i++) {
      if (arr[i] == val_b) {
        arr.erase(arr.begin()+i, arr.begin()+i+1);
        break;
      }
    }
  }
  // print results
  for (int &val : arr) {
    cout << val << ' ';
  }
  cout << endl;
}
