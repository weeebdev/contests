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

int n, M;
map<int, vector<int>> edges;
vi a(2e5);

int preorder(int m, int i, int p = -1) {
  // cout << "i: " << i << " m: " << m << endl;

  if (a[i - 1] == 1)
    m--;
  else
    m = M;

  if (m < 0) {
    return 0;
  }

  if (sz(edges[i]) == 1 && i != 1) {
    // cout << "i: " << i << endl;
    return 1;
  }

  int sum = 0;
  for (int j : edges[i]) {
    if (j == p)
      continue;
    sum += preorder(m, j, i);
  }

  return sum;
}

void solve() {
  cin >> n >> M;
  rep(i, 0, n) cin >> a[i];
  rep(i, 0, n - 1) {
    int x, y;
    cin >> x >> y;

    edges[x].pb(y);
    edges[y].pb(x);
  }

  cout << preorder(M, 1) << endl;
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
