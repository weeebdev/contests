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
  int n, m, k;
  cin >> n >> m >> k;
  vi a(n), b(m);

  rep(i, 0, n) cin >> a[i];
  rep(i, 0, m) cin >> b[i];

  sort(all(a));
  sort(all(b));

  if (k % 2 == 1) {
    a[0] = max(b[b.size() - 1], a[0]);
  } else {
    int c = a[0];
    a[0] = max(b[b.size() - 1], a[0]);
    b[sz(b) - 1] = min(c, b[sz(b) - 1]);
    sort(all(a));
    sort(all(b));
    a[sz(a) - 1] = min(a[sz(a) - 1], b[0]);
  }

  ll s = 0;
  rep(i, 0, n) { s += a[i]; }

  cout << s << endl;
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
