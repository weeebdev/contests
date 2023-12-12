// Bismillahir Rahmanir Rahim
// chrono::system_clock::now().time_since_epoch().count()
#include <algorithm>
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
  int n;
  cin >> n;
  ll sa = 0, sb = 0;
  ll ma = INT_MAX, mb = INT_MAX;
  ll x;
  rep(i, 0, n) {
    cin >> x;
    sa += x;
    ma = min(ma, x);
  }
  rep(i, 0, n) {
    cin >> x;
    sb += x;
    mb = min(mb, x);
  }

  sa += mb * n;
  sb += ma * n;

  cout << min(sa, sb) << endl;
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
