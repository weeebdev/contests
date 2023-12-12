// Bismillahir Rahmanir Rahim
// chrono::system_clock::now().time_since_epoch().count()
#include <algorithm>
#include <bits/stdc++.h>
#include <cstdint>
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
  int n, k;
  cin >> n;
  vi a(n, 0);
  vector<pii> c(n);

  rep(i, 0, n) {
    int x;
    cin >> x;
    c[i].first = x;
    c[i].second = i;
  }

  cin >> k;

  sort(all(c));

  vi dp(k + 1);
  dp[0] = 0;

  rep(i, 1, k + 1) {
    dp[i] = INT_MAX;

    for (auto p : c) {
      if (i - p.first >= 0) {
        dp[i] = max(dp[i], dp[i - p.first] + 1);
      }
    }
  }

  int i = 0, j = 0;
  while (k >= 0) {
    int m = c[i].first;

    if (k - m >= 0) {
      j++;
      a[c[0].second]++;
    } else {
      k += c[i].first;
      i++;
      j--;
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
