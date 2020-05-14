// Board Moves
#include <iostream>
#include <vector>
#include <cstdint>

using namespace std;

int main() {
  int t; cin >> t;
  vector<unsigned long long> vec = {};
  vec.push_back(0);
  vec.push_back(0);
  vec.push_back(8);
  for (int i=5; i<500002; i+=2) {
    int index = i/2 + 1;
    unsigned long long res = vec[index-1] + (unsigned long long)i*4*(i/2)-(unsigned long long)4*(i/2);
    vec.push_back(res);
  }
  while (t--) {
    int n; cin >> n;
    cout << vec[n/2+1] << '\n';
  }
  return 0;
}
