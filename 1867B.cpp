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
  string s;

  cin >> n >> s;

  int ans = 0, m1 = 0, m2 = 0;
  rep(i, 0, n / 2) {
    if (s[i] == s[n - i - 1])
      m2++;
    else
      ans++;
  }

  if (n % 2)
    m1++;

  string res(n + 1, '0');

  rep(i, 0, m2 + 1) {
    rep(j, 0, m1 + 1) { res[ans + i * 2 + j] = '1'; }
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
