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
#define w(x) while (x)
#define cend cout << endl
#define make_unique(x)                                                         \
  sort(all((x)));                                                              \
  (x).resize(unique(all((x))) - (x).begin())
#define pdoubled(x) cout << fixed << setprecision(10) << x << endl

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<pii> vp;
typedef vector<double> vd;

bool mcases = false;
void yes() { cout << "YES" << endl; }
void no() { cout << "NO" << endl; }

void solve() {
  int n;
  cin >> n;
  vi a(n);
  rep(i, 0, n) cin >> a[i];
  int res = 0, gs = 0, ge = 0, s = gs, e = ge;
  int c = 0;
  rep(i, 0, n) {
    if (a[i] == 1)
      c--;
    else {
      c = max(c, 0) + 1;
      if (c == 1)
        s = i;
    }

    if (c > res) {
      gs = s;
      ge = i;
      res = c;
    }
  }

  res = 0;
  rep(i, 0, n) {
    if (i >= gs && i <= ge)
      res += a[i] == 0;
    else
      res += a[i];
  }

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
