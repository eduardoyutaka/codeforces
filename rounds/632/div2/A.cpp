// Little Artem
#include <iostream>

using namespace std;

int main() {
  int t, n, m;
  cin >> t;
  for (int k=0; k<t; ++k) {
    int bcnt = 0, wcnt = 0;
    cin >> n >> m;
    char mtx[100][100];
    for (int i=0; i<n; ++i) {
      for (int j=0; j<m; ++j) {
        if (i%2==0 && j%2==0) {
          mtx[i][j] = 'B';
          ++bcnt;
        } else if (i%2==1 && j%2==1) {
          mtx[i][j] = 'B';
          bcnt++;
        } else {
          mtx[i][j] = 'W';
          ++wcnt;
        }
      }
    }
    if (bcnt==wcnt) {
      if (mtx[0][0]=='W') {
        mtx[0][0] = 'B';
      } else if (mtx[0][m-1]=='W') {
        mtx[0][m-1] = 'B';
      } else if (mtx[n-1][0]=='W') {
        mtx[n-1][0] = 'B';
      } else if (mtx[n-1][m-1]=='W') {
        mtx[n-1][m-1] = 'B';
      }
    }
    for (int i=0; i<n; ++i) {
      for (int j=0; j<m; ++j) {
        cout << mtx[i][j];
      }
      cout << '\n';
    }
  }
  return 0;
}
