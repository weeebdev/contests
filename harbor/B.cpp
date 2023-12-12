// Bismillahir Rahmanir Rahim
#include <iostream>
#include <vector>
#define ll long long
#define ull unsigned long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;
int main() {
  fastread();
  int t;
  cin >> t;
  while (t--) {
    int x;
    cin >> x;

    vector<int> dv(1000 > x ? x : 1000, 0), xv(1000 > x ? x : 1000, 0);
    int i = 0;
    xv[i] = x;

    while (true) {
      int d;
      if (dv[i] == 0) {
        d = xv[i] - 1;

        while (d > 1) {
          if (xv[i] % d == 0)
            break;
          d--;
        }
      } else {
        // cout << "asd\n";
        // cout << dv[i] << endl;
        if (dv[i] - 1 == 0) {
          i--;
          continue;
        }
        d = dv[i] - 1;
      }

      int c = 0;
      for (int j = 0; j < dv.size(); j++) {
        if (dv[j] == 0)
          break;

        if (dv[j] == d)
          c++;
      }

      if (c < 2) {
        int xn = xv[i] - d;
        cout << xv[i] << '-' << d << "=" << xn << endl;

        dv[i] = d;
        xv[++i] = xn;

        if (xn == 1)
          break;
      } else {
        i--;
      }
    }

    int c = 0;
    for (int i = 0; i < xv.size(); i++) {
      if (xv[i] != 0)
        c++;
    }

    cout << c << endl;

    for (int i = 0; i < c; i++) {
      cout << xv[i] << ' ';
    }

    cout << endl;
  }

  return 0;
}
