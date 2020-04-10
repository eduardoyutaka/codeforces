// Level Statistics
#include <iostream>

using namespace std;

void err() {
  cout << "NO\n";
}

void solve(int p[], int c[], int n) {
  for (int i=0; i<n; ++i) {
    if (c[i] > p[i]) {
      err();
      return;
    }
    if (i>0) {
      if (p[i] < p[i-1] || c[i] < c[i-1]) {
        err();
        return;
      }
      if (p[i] - p[i-1] < c[i] - c[i-1]) {
        err();
        return;
      }
    }
  }
  cout << "YES\n";
  return;
}

int main() {
  int T; cin >> T;
  while (T--) {
    int n; cin >> n;
    int p[1000] = {}, c[1000] = {};
    for (int i=0; i<n; ++i) {
      cin >> p[i] >> c[i];
    }
    solve(p, c, n);
  }
  return 0;
}
