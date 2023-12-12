// Bismillahir Rahmanir Rahim
// chrono::system_clock::now().time_since_epoch().count()
#include <bits/stdc++.h>
#include <string>
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

bool check(int n) {
  if (n == 0)
    return f;

  while (n > 0) {
    int x = n % 10;
    if (x != 7 && x != 4) {
      return f;
    }
    n /= 10;
  }

  return t;
}
void solve() {
  int n;
  cin >> n;

  rep(i, 4, n + 1) {
    if (!check(i))
      continue;

    if (n % i == 0)
      return yes();
  }

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
