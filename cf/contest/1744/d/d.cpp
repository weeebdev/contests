// Bismillahir Rahmanir Rahim
// chrono::system_clock::now().time_since_epoch().count()
#include <algorithm>
#include <bits/stdc++.h>
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define rep(i, a, b) for (int i = (a); i < (b); ++i)
#define debug(x) cerr << #x << " = " << x << endl
#define t true;
#define f false;
#define w(x) while (x)
#define cend cout << endl
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vl;
bool mcases = t;
void yes() { cout << "YES" << endl; }
void no() { cout << "NO" << endl; }

void solve() {
  int n;
  cin >> n;

  ll res = 0, nn = n, x;

  rep(i, 0, n) {
    cin >> x;

    while (x % 2 == 0) {
      nn -= 1;
      x /= 2;
    }
  }

  if (nn <= 0) {
    cout << 0 << endl;
    return;
  }

  vi a;
  rep(i, 2, n + 1) {
    int x = 0, xi = i;
    while (xi % 2 == 0) {
      x++;
      xi /= 2;
    }

    if (x > 0)
      a.pb(x);
  }

  sort(all(a));
  reverse(all(a));

  rep(i, 0, sz(a)) {
    nn -= a[i];
    res++;

    if (nn <= 0)
      break;
  }

  if (nn > 0)
    cout << -1 << endl;
  else
    cout << res << endl;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int tt = 1;
  if (mcases)
    cin >> tt;

  while (tt--) {
    solve();
  }
  return 0;
}
