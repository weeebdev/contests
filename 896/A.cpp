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

  vi a(n);
  int x = 0;
  int r = 0;

  for (int i = 0; i < n; i++) {
    cin >> a[i];
    r ^= a[i];
    if (a[i] != 0)
      x = a[i];
  }

  if (x == 0) {
    cout << 0 << endl;
    return;
  }

  if (n % 2 == 0) {
    cout << 2 << endl;
    cout << 1 << ' ' << n << endl;
    cout << 1 << ' ' << n << endl;
  } else {
    cout << 4 << endl;
    cout << 1 << ' ' << n - 1 << endl;
    cout << 1 << ' ' << n - 1 << endl;
    cout << n - 1 << ' ' << n << endl;
    cout << n - 1 << ' ' << n << endl;
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
