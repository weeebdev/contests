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

  set<int> gs;
  map<int, set<int>> m;

  rep(i, 0, n) {
    int k;
    cin >> k;
    gs.insert(k);

    while (k--) {
      int x;
      cin >> x;

      gs.insert(x);
      m[x].insert(i);
    }
  }

  if (n == 1) {
    cout << 0 << endl;
    return;
  }

  map<int, int> m1;

  for (auto i : m) {
    if (sz(i.se) == 1) {
      m1[*i.se.begin()]++;
    }
  }

  int mu = (*m1.begin()).se;
  for (auto i : m1) {
    mu = min(mu, i.se);
  }

  if (mu == 0) {
    cout << 0 << endl;
  } else {
    cout << sz(gs) - mu << endl;
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
