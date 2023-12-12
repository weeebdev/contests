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
    int n;
    cin >> n;

    ll s = 0;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }

    while (true) {
      bool f = false;
      int d = 1;

      for (int i = 1; i < n; i++) {
        if (v[i - 1] > v[i]) {
          f = true;
          d = v[i - 1] - v[i];
        }
      }

      if (f) {
        for (int i = 0; i < n; i++) {
          v[i] = max(0, v[i] - d);
        }
        s += d;
      } else {
        break;
      }
    }

    cout << s << endl;
  }

  return 0;
}
