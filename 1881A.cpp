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
  int n, m;
  string x, s;
  cin >> n >> m >> x >> s;

  int i = 0, j = 1, k = 0;
  bool started = false;
  w(k < sz(s)) {
    if (j > 3 && !started) {
      cout << -1 << endl;
      return;
    }

    if (i == j * sz(x)) {
      i = 0;
      j++;
    }

    if (k == 0 && !started && x[i % sz(x)] == s[k]) {
      started = true;
      i++;
      k++;
      continue;
    }

    if (started && x[i % sz(x)] == s[k]) {
      i++;
      k++;
      continue;
    }

    if (started && x[i % sz(x)] != s[k]) {
      started = false;
      k = 0;
    }

    i++;
  }

  cout << j << endl;
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
