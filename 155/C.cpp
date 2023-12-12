// Bismillahir Rahmanir Rahim
// chrono::system_clock::now().time_since_epoch().count()
#include <bits/stdc++.h>
#include <iostream>
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
  string s;
  cin >> s;

  ll mo = 0, np = 1, nr = 0;
  rep(i, 1, sz(s)) {
    if (s[i - 1] == s[i]) {
      nr++;
    } else if (nr > 0) {
      mo += nr;
      np = (np * (ll)tgamma(nr + 2)) % 998244353;
      nr = 0;
    }
  }

  if (nr > 0) {
    mo += nr;
    np = (np * (ll)tgamma(nr + 2)) % 998244353;
  }

  cout << mo << ' ' << np << endl;
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
