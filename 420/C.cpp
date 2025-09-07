#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
  
  int n, q;
  cin >> n >> q;
  vector<int> arr(n), brr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> brr[i];
  }

  vector<int> mins(n);
  int total = 0;
  for (int i = 0; i < n; i++) {
    int w = min(arr[i], brr[i]);
    mins[i] = w;
    total = total + w;
  }

    for (int i = 0; i < q; i++) {
        char c;
        int x, y;
        cin >> c >> x >> y;
        if (c == 'A') {
            int z = min(y, brr[x - 1]);
            total = total + z - mins[x - 1];
            mins[x-1]=z;
            arr[x - 1] = y;
        } else {
            int z = min(arr[x - 1], y);
            total = total + z - mins[x - 1];
            mins[x-1]=z;
            brr[x - 1] = y;
        }
        cout << total << endl;
    }

}
