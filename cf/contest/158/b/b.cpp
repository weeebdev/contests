// Bismillahir Rahmanir Rahim
// chrono::system_clock::now().time_since_epoch().count()
#include <bits/stdc++.h>
#include <cmath>
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
bool mcases = f;
void yes() { cout << "YES" << endl; }
void no() { cout << "NO" << endl; }

void solve() {
  int n;
  cin >> n;
  ll res = 0;

  map<int, ll> m;
  m[1] = 0;
  m[2] = 0;
  m[3] = 0;
  m[4] = 0;
  rep(i, 0, n) {
    int x;
    cin >> x;
    m[x]++;
  }

  if (m[1] >= m[3]) {
    res =
        m[3] + m[2] / 2 + m[4] + (ll)ceil((m[1] - m[3] + 2 * (m[2] % 2)) / 4.0);
  } else {
    res = m[3] + m[2] / 2 + m[4] + m[2] % 2;
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
