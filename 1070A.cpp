// Bismillahir Rahmanir Rahim
#include <iostream>
#define ll long long
#define ull unsigned long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;
int main() {
  fastread();
  int d, s, ss = 0;

  cin >> d >> s;

  ll nn = d, n = d;

  while (true) {
    nn = n;
    ss = 0;
    while (nn > 0) {
      ss += nn % 10;
      nn /= 10;
    }

    if (ss == s) {
      cout << n;
      return 0;
    }
    n += d;
  }

  cout << n << " " << ss << endl;

  cout << -1;

  return 0;
}
