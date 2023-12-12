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
  int n, k, x;
  cin >> n >> k >> x;

  if (x != 1) {
    yes();
    cout << n << endl;
    rep(i, 0, n) { cout << 1 << ' '; }
    cout << endl;
    return;
  }

  if (k == 1) {
    no();
    return;
  }

  if (n % 2) {
    if (k == 2)
      no();
    else {
      yes();
      cout << n / 2 << endl;
      cout << 3 << ' ';
      rep(i, 0, n / 2 - 1) { cout << 2 << ' '; }

      cout << endl;
    }
  } else {
    yes();
    cout << n / 2 << endl;
    rep(i, 0, n / 2) { cout << 2 << ' '; }
    cout << endl;
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
