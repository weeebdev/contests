// Bismillahir Rahmanir Rahim
#include <iostream>
#include <vector>
#define ll long long
#define ull unsigned long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;
int main() {
  fastread();
  ll t, n, m;
  cin >> t;
  while (t--) {
    cin >> n >> m;

    string vika = "vika";
    ll fnd = 0;
    vector<vector<char>> v(n);

    for (ll i = 0; i < n; i++) {
      v[i] = vector<char>(m);
      for (ll j = 0; j < m; j++) {
        cin >> v[i][j];
      }
    }

    for (ll i = 0; i < m; i++) {
      for (ll j = 0; j < n; j++) {
        if (v[j][i] == vika[fnd]) {
          fnd++;
          break;
        }
      }
    }

    if (fnd == 4)
      cout << "YES\n";
    else
      cout << "NO\n";
  }

  return 0;
}
