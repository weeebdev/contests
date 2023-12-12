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
  ll s, a, b, c;
  ull ans, can_buy, div;

  cin >> t;
  while (t--) {
    int x, y, n;
    cin >> x >> y >> n;

    vector<int> v(n), b(n - 1);
    v[0] = x;
    v[n - 1] = y;

    int i = 1;

    bool failed = false;

    while (i < n - 1) {
      if (v[i] < v[i - 1]) {
        v[i] = v[i - 1] + 1;
      }

      if (v[i] > v[i + 1] && i + 1 != n - 1) {
        v[i + 1] = v[i] + 1;
      }

      if (v[i] >= y) {
        failed = true;
        break;
      }

      int b1 = v[i] - v[i - 1];
      int b2 = v[i + 1] - v[i];

      if (i - 2 >= 0 && b1 >= b[i - 2]) {
        i--;
        continue;
      }

      if (b1 <= b2) {
        v[i]++;
      } else {
        b[i - 1] = b1;
        i++;
      }
    }

    if (failed)
      cout << -1 << endl;
    else {
      for (int i = 0; i < n; i++) {
        cout << v[i] << ' ';
      }

      cout << endl;
    }
  }

  return 0;
}
