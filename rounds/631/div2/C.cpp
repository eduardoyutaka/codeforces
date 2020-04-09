// Dreamoon Likes Coloring
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int n, m, l[100000];
  long long suffixsum[100000];
  cin >> n >> m;
  for (int i=0; i<m; ++i) {
    cin >> l[i];
    if (l[i]>n-i) {
      cout << -1 << '\n';
      return 0;
    }
  }
  suffixsum[m-1] = l[m-1];
  for (int i=m-2; i>=0; --i) {
    suffixsum[i] = suffixsum[i+1] + l[i];
  }
  if (suffixsum[0]<n) {
    cout << -1 << '\n';
    return 0;
  }
  for (int i=0; i<m; ++i) {
    cout << max((long long)i+1, n - suffixsum[i] + 1); 
    if (i==m-1) {
      cout << '\n';
    } else {
      cout << ' ';
    }
  }
  return 0;
}
