// Eugene and an array
#include <iostream>
#include <set>

using namespace std;

int main() {
  int n; cin >> n;
  long long prefix[200001] = {};
  for (int i=0; i<n; ++i) {
    int tmp;
    cin >> tmp;
    prefix[i+1] = prefix[i] + tmp;
  }
  int begin = 0, end = 0;
  long long ans = 0;
  set<long long> s = {0};
  while (begin < n) {
    while (end < n && !s.count(prefix[end + 1])) {
      ++end;
      s.insert(prefix[end]);
    }
    ans += end - begin;
    s.erase(prefix[begin]);
    ++begin;
  }
  cout << ans << '\n';
  return 0;
}
