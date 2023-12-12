// Bismillahir Rahmanir Rahim
// chrono::system_clock::now().time_since_epoch().count()
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
  vi a(2 * n);
  rep(i, 0, 2 * n) { cin >> a[i]; }

  sort(all(a));

  vector<pii> vpii(n);
  ll resx = 0, resy = 0;
  for (int i = 0; i < n; i++) {
    vpii[i].fi = a[i];
    vpii[i].se = a[2 * n - i - 1];
  }

  ll res = 0;
  rep(i, 0, n - 1) {
    res += abs(vpii[i].fi - vpii[i + 1].fi) + abs(vpii[i].se - vpii[i + 1].se);
  }

  cout << res << endl;

  rep(i, 0, n) { cout << vpii[i].fi << ' ' << vpii[i].se << endl; }
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
