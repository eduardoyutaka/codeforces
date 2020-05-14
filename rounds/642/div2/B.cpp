// Two Arrays and Swaps
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

bool comp(int i, int j) { return (i>j); }

int main() {
  int t; cin >> t;
  while (t--) {
    vector<int> a = {}, b = {};
    int n, k; cin >> n >> k;
    for (int i=0; i<n; ++i) {
      int ai; cin >> ai;
      a.push_back(ai);
    }
    for (int i=0; i<n; ++i) {
      int bi; cin >> bi;
      b.push_back(bi);
    }
    for (int i=0; i<k; ++i) {
      vector<int>::iterator maxbit = max_element(b.begin(), b.begin()+n);
      vector<int>::iterator minait = min_element(a.begin(), a.begin()+n);
      if (*maxbit > *minait) {
        int tmp = *minait;
        *minait = *maxbit;
        *maxbit = tmp;
      }
    }
    int result = accumulate(a.begin(), a.begin()+n, 0);
    cout << result << '\n';
  }
  return 0;
}
