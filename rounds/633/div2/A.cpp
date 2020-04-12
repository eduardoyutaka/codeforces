// Filling Diamonds
#include <iostream>

using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    long long n; cin >> n;
    if (n==1) {
      cout << 1 << '\n';
    } else {
      cout << n << '\n';
    }
  }
  return 0;
}
