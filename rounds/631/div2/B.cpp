// Dreamoon Likes Permutations
#include <iostream>
#include <set>
#include <utility>
#include <vector>

#define LENGTH 200001

using namespace std;

int main() {
  int t, n;
  cin >> t;

  while (t--) {
    int a[LENGTH];
    bool fperm[LENGTH], bperm[LENGTH];
    set<int> fset, bset;
    cin >> n;

    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }

    for (int i = 0; i < n; ++i) {
      fset.insert(a[i]);
      // fperm[i] = *fset.rbegin() == (i+1) ? true : false;
      fperm[i] = (*fset.rbegin() == (i+1) && *fset.rbegin() == fset.size()) ? true : false;
    }

    for (int i=n-1; i>=0; --i) {
      bset.insert(a[i]);
      bperm[i] = (*bset.rbegin() == (n-i) && *bset.rbegin() == bset.size()) ? true : false;
    }

    int k = 0;
    vector<int> ans;

    for (int i = 0; i < n; ++i) {
      if (fperm[i] && bperm[i+1]) {
        ++k;
        ans.push_back(i+1);
        ans.push_back(n-i-1);
      }
    }

    cout << k << endl;
    if (k == 1) {
      cout << ans[0] << ' ' << ans[1] << endl;
    } else if (k == 2) {
      cout << ans[0] << ' ' << ans[1] << endl;
      cout << ans[2] << ' ' << ans[3] << endl;
    }
  }

  return 0;
}
