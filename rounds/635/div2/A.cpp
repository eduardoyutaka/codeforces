// Ichihimi and Triangle
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    unsigned a, b, c, d;
    cin >> a >> b >> c >> d;
    unsigned x, y, z;
    x = b;
    z = c;
    y = max(b, c - b);
    while (x + y < z+1) {
      ++y;
    }
    cout << x << ' ' << y << ' ' << z << endl;
  }
  return 0;
}
