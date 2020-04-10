// Middle Class
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(int i, int j) { return (i>j); }

int main() {
  int T; cin >> T;
  while (T--) {
    int n; cin >> n;
    long double x; cin >> x;
    vector<long double> a;
    for (int i=0; i<n; ++i) {
      int tmp; cin >> tmp;
      a.push_back(tmp);
    }
    sort(a.begin(), a.end(), comp);
    vector<long double> prefixsum;
    prefixsum.push_back(a[0]);
    for (int i=1; i<n; ++i) {
      prefixsum.push_back(prefixsum[i-1] + a[i]);
    }
    int ans = 0;
    for (int i=0; i<n; ++i) {
      if (prefixsum[i] >= x * (i+1)) {
        ++ans;
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
