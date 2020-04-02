// Composite Coloring
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

bool is_prime(int n) {
  for (int i = 2; i < n; ++i)
    if (n % i == 0) return false;
  return true;
}

std::vector<int> prime_numbers(int limit) {
  std::vector<int> prime_numbers;
  int n = 2;

  while (n <= limit) {
    if (is_prime(n))
      prime_numbers.push_back(n);
    ++n;
  }

  return prime_numbers;
}

std::vector<int> divisors = prime_numbers((int) sqrt(1000));

int main() {
  int t;
  std::cin >> t;

  for (int i = 0; i < t; ++i) {
    int n;
    std::cin >> n;

    std::vector<int> elements;
    std::vector<bool> used_colors(11, false);

    for (int j = 0; j < n; ++j) {
      int an;
      std::cin >> an;

      for (int k = 0; k < divisors.size(); ++k) {
        if (an % divisors[k] == 0) {
          elements.push_back(divisors[k]);
          used_colors[k] = true;
          break;
        }
      }
    }

    int m = 0;
    std::vector<int> colors;

    for (int j = 0; j < divisors.size(); ++j) {
      colors.push_back(m);
      if (used_colors[j])
        ++m;
    }

    std::cout << m << std::endl;

    for (auto element: elements) {
      std::vector<int>::iterator it = std::find(divisors.begin(), divisors.end(), element);
      std::cout << colors[std::distance(divisors.begin(), it)] + 1 << ' ';
    }

    std::cout << std::endl;
  }

  return 0;
}
