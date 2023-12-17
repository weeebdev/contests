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
  int n, q;
  cin >> n;
  vi x(n);
  rep(i, 0, n) cin >> x[i];
  cin >> q;
  vi m(q);
  rep(i, 0, q) cin >> m[i];

  sort(all(x));

  for (int i : m) {
    int l = 0, r = n - 1;
    int ans = -1;

    while (l <= r) {
      int mid = l + (r - l) / 2;

      if ((x[mid] <= i && mid == n - 1) || (x[mid] <= i && x[mid + 1] > i)) {
        ans = mid + 1;
        break;
      } else if (x[mid] < i)
        l = mid + 1;
      else
        r = mid - 1;
    }

    if (ans == -1)
      cout << 0 << endl;
    else
      cout << ans << endl;
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
