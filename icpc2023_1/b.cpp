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
  int n;
  cin >> n;
  vi a(n + 1);

  a[0] = 0;
  rep(i, 1, n + 1) {
    cin >> a[i];
    a[i] += a[i - 1];
  }

  int m;
  cin >> m;
  rep(i, 0, m) {
    int x;
    cin >> x;
    int l = 0, r = n;
    while (l <= r) {
      int mid = l + (r - l) / 2;

      if (a[mid] >= x && x > a[mid - 1]) {
        cout << mid << endl;
        break;
      } else if (x > a[mid]) {
        l = mid + 1;
      } else {
        r = mid - 1;
      }
    }
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
