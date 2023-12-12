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

    vector<int> vx, vd;

    vx.push_back(x);

    bool f = false;

    while (vx.back() > 1) {
      int tx = vx.back();
      int d;

      if (f) {
        d = vd.back();
        vd.pop_back();

        if (--d == 0) {
          vx.pop_back();
          continue;
        }

        f = false;
      } else {
        d = tx - 1;
      }

      while (d > 1) {
        if (tx % d == 0)
          break;
        d--;
      }

      int c = 0;
      for (int i = 0; i < vd.size(); i++) {
        if (vd[i] == d)
          c++;
      }

      if (c >= 2) {
        vx.pop_back();
        f = true;
      } else {
        vd.push_back(d);
        vx.push_back(tx - d);
      }
    }

    cout << vx.size() << endl;

    for (int i = 0; i < vx.size(); i++) {
      cout << vx[i] << ' ';
    }
    cout << endl;
  }

  return 0;
}
