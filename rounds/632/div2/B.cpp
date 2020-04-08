// Kid Anton
#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  for (int k=0; k<t; ++k) {
    int n, a[100000], b[100000], max[100000], min[100000];
    bool possible = true;
    cin >> n;
    cin >> a[0];
    min[0] = a[0];
    max[0] = a[0];
    for (int i=1; i<n; ++i) {
      cin >> a[i];
      if (a[i]>=max[i-1]) {
        max[i] = a[i];
      } else {
        max[i] = max[i-1];
      }
      if (a[i]<=min[i-1]) {
        min[i] = a[i];
      } else {
        min[i] = min[i-1];
      }
    }
    for (int i=0; i<n; ++i) {
      cin >> b[i];
    }
    if (a[0]!=b[0]) {
      possible = false;
    } else {
      for (int i=n-1; i>0; --i) {
        if (b[i]>a[i]) {
          if (max[i-1]!=1) {
            possible = false;
          }
        } else if (b[i]<a[i]) {
          if (min[i-1]!=-1) {
            possible = false;
          }
        }
      }
    }
    if (possible) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
  return 0;
}
