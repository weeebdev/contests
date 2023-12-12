// Bismillahir Rahmanir Rahim
#include <algorithm>
#include <iostream>
#include <map>
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
    ll n, k;
    cin >> n >> k;

    vector<ll> v(n + 1);
    ll s = 0;
    for (ll i = 0; i < n; i++) {
      cin >> v[i];
      s += v[i];
    }

    v[n] = (n * (n + 1)) / 2 - s;

    ll j = k % (n + 1);
    rotate(v.begin(), v.begin() + n + 1 - j, v.end());

    for (ll i = 0; i < n; i++)
      cout << v[i] << ' ';

    cout << endl;
  }

  return 0;
}
