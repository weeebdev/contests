// Bismillahir Rahmanir Rahim
#include <iostream>
#define ll long long
#define ull unsigned long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;
int main() {
  fastread();
  int t;
  cin >> t;
  while (t--) {
    int n, a, q;
    string s;
    cin >> n >> a >> q >> s;

    n -= a;

    int m = 0;
    int f = 0;

    for (int i = 0; i < q; i++) {
      if (s[i] == '-') {
        a--;
        f++;
      } else {
        if (f > 0) {
          f--;
          m++;
        } else {
          n--;
        }
      }
    }

    if (n <= 0)
      cout << "YES";
    else if (n - m <= 0)
      cout << "MAYBE";
    else {
      cout << "NO";
    }

    cout << endl;
  }

  return 0;
}
