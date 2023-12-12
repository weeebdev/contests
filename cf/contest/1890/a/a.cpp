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

  vi a(n);
  rep(i, 0, n) cin >> a[i];

  if (n == 2)
    return yes();
  sort(all(a));

  int m = n / 2;

  if (n % 2 == 0 && a[m - 1] == a[0] && a[m] == a[n - 1])
    yes();
  else if (n % 2 == 1 && (a[m] == a[0] || a[m] == a[n - 1]) &&
           a[m - 1] == a[0] && a[m + 1] == a[n - 1])
    yes();
  else
    no();
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
