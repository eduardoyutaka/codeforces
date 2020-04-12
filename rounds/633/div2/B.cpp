// Sorted Adjacent Differences
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    vector<int> v;
    for (int i=0; i<n; ++i) {
      int a; cin >> a;
      v.push_back(a);
    }
    sort(v.begin(), v.end());
    int pivot = v.size() / 2;
    for (int i=0; i<v.size(); ++i) {
      if (i%2==0) {
        pivot += i;
      } else {
        pivot -= i;
      }
      cout << v[pivot];
      if (i==v.size()-1) {
        cout << '\n';
      } else {
        cout << ' ';
      }
    }
  }
  return 0;
}
