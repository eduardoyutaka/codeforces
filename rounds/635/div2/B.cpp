// Kana and Dragon Quest game
#include <iostream>

using namespace std;

int main() {
  int t; cin >> t;
  // 40 || 10
  while (t--) {
    int x, n, m;
    cin >> x >> n >> m;
    while (x > 20 && n) {
      x = (x/2) + 10;
      n--;
    }
    while (x > 0 && m) {
      x -= 10;
      m--;
    }
    if (x > 0) {
      cout << "NO\n";
    } else {
      cout << "YES\n";
    }
  }
  return 0;
}
