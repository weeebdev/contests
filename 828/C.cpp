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
  char c;
  string s;

  cin >> n >> c >> s;

  int res = 0;
  int ci = -1;
  int gi = -1;

  rep(i, 0, n) {
    if (s[i] == c && ci == -1) {
      ci = i;
    }

    if (s[i] == 'g' && gi == -1)
      gi = i;

    if (s[i] == 'g' && ci != -1) {

      res = max(res, i - ci);
      ci = -1;
    }
  }

  if (ci != -1) {
    res = max(res, n - ci + gi);
  }

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
