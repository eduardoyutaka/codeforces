// Exercising Walk
#include <iostream>
#include <utility>

int main() {
  int t, a, b, c, d;
  std::pair<int, int> p, p1, p2;
  std::cin >> t;

  for (int i = 0; i < t; ++i) {
    std::cin >> a >> b >> d >> c;
    std::cin >> p.first >> p.second;
    std::cin >> p1.first >> p1.second;
    std::cin >> p2.first >> p2.second;

    int dh = b - a;
    int dv = c - d;

    if (p.first == p1.first && p.first == p2.first && (a != 0 || b != 0)) {
      std::cout << "No" << std::endl;
      continue;
    }

    if (p.second == p1.second && p.second == p2.second && (c != 0 || d != 0)) {
      std::cout << "No" << std::endl;
      continue;
    }

    if (p.first + dh < p1.first ||
        p.first + dh > p2.first ||
        p.second + dv < p1.second ||
        p.second + dv > p2.second) {
      std::cout << "No" << std::endl;
    } else {
      std::cout << "Yes" << std::endl;
    }
  }

  return 0;
}
