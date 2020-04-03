// K-Complete Word
#include <iostream>
#include <map>
#include <algorithm>
#include <utility>

using namespace std;

int main() {
  int t, n, k;
  char str[200001];

  cin >> t;

  for (int i = 0; i < t; ++i) {
    cin >> n >> k >> str;

    if (k <= 2) {
      map<char, int> characters_counts;

      int j = 0;
      while (str[j] != '\0') {
        characters_counts[str[j++]]++;
      }

      char character;
      int count = 0;
      for (map<char, int>::iterator it = characters_counts.begin(); it != characters_counts.end(); ++it) {
        if (it->second > count) {
          character = it->first;
          count = it->second;
        }
      }

      cout << n - count << endl;
    } else {
      int result = 0;

      for (int j = 0; j < k / 2; ++j) {
        map<char, int> characters_counts;

        for (int l = 0; l < n; l += k) {
          characters_counts[str[l + j]]++;
          characters_counts[str[l + k - 1 - j]]++;
        }

        char character;
        int count = 0;
        for (map<char, int>::iterator it = characters_counts.begin(); it != characters_counts.end(); ++it) {
          if (it->second > count) {
            character = it->first;
            count = it->second;
          }
        }

        result += count;
      }

      if (k % 2 != 0) {
        map<char, int> characters_counts;

        for (int j = k / 2; j < n; j += k) {
          characters_counts[str[j]]++;
        }

        char character;
        int count = 0;
        for (map<char, int>::iterator it = characters_counts.begin(); it != characters_counts.end(); ++it) {
          if (it->second > count) {
            character = it->first;
            count = it->second;
          }
        }

        result += count;
      }

      cout << n - result << endl;
    }
  }

  return 0;
}
