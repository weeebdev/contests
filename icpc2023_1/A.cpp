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
  int n, m, k, x, s;
  cin >> n >> m >> k >> x >> s;
  vector<pii> a(m), c(k);

  rep(i, 0, m) { cin >> a[i].fi; }
  rep(i, 0, m) { cin >> a[i].se; }
  rep(i, 0, k) { cin >> c[i].fi; }
  rep(i, 0, k) { cin >> c[i].se; }

  ll res = 0;

  int i = 0, j = 0;
  while (i < m || j < k) {
    if (n <= 0)
      break;
  }
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
