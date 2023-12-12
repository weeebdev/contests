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
  int n;
  cin >> n;

  vector<vi> arr(n);
  pii mi;
  mi.fi = INT_MAX;
  mi.se = 0;

  rep(i, 0, n) {
    int m;
    cin >> m;
    vi marr(m);
    rep(j, 0, m) { cin >> marr[j]; }

    sort(all(marr));
    if (mi.fi >= marr[1]) {
      mi.fi = marr[1];
      mi.se = i;
    }

    arr[i] = marr;
  }

  ll res = 0;
  int j = arr[mi.se][0];
  rep(i, 0, n) {
    if (i == mi.se)
      continue;

    res += arr[i][1];
    j = min(j, arr[i][0]);
  }

  res += j;

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
