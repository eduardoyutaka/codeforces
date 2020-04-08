// Dreamoon and Ranking Collection
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int t, n, x;

  cin >> t;

  while (t--) {
    cin >> n >> x;
    vector<int> a(202, 0);
    a[0] = 1;

    for (int i = 0; i < n; ++i) {
      int an;
      cin >> an;
      a[an] = an;
    }

    while (x--) {
      vector<int>::iterator it;

      it = find(a.begin(), a.end(), 0);
      *it = it - a.begin();
    }

    int i = 1;
    int count = 0;
    while (a[i]) {
      ++count;
      ++i;
    }

    cout << count << endl;
  }

  return 0;
}
