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
bool mcases = f;
void yes() { cout << "YES" << endl; }
void no() { cout << "NO" << endl; }

void solve() {
  int x, y, z;
  vi a(3);
  cin >> a[0] >> a[1] >> a[2] >> x >> y >> z;

  a[0] -= x;
  a[1] -= y;
  a[2] -= z;

  sort(all(a));

  if (a[1] < 0) {
    a[0] += a[1];
    a[1] = 0;
  } else {
    a[0] += a[1] / 2;
    a[1] %= 2;
  }

  a[0] += a[2] / 2;
  a[2] %= 2;

  if (a[0] < 0 || a[1] < 0 || a[2] < 0)
    no();
  else
    yes();
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
