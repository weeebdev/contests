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
  ll n, k;
  cin >> n >> k;
  vector<pii> vp(n);

  rep(i, 0, n) { cin >> vp[i].first; }

  rep(i, 0, n) { cin >> vp[i].second; }

  ll ca, c, res;
  ca = vp[0].first > k ? 0 : vp[0].first;
  c = ca > 0 ? 1 : 0;
  res = 0;

  rep(i, 1, n) {
    if (vp[i - 1].second % vp[i].second == 0) {
      c++;
      ca += vp[i].first;
    } else {
      res = max(res, c);
      c = 1;
      ca = vp[i].first;
    }

    if (ca > k) {
      ca -= vp[i - c + 1].first;
      c--;
    }
  }

  res = max(res, c);

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
