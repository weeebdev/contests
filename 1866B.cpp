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
bool mcases = f;
void yes() { cout << "YES" << endl; }
void no() { cout << "NO" << endl; }

void solve() {
  int n;
  cin >> n;

  vi A(n), B(n);
  for (int i = 0; i < n; i++) {
    cin >> A[i];
  }

  for (int i = 0; i < n; i++) {
    cin >> B[i];
  }

  int m;
  cin >> m;

  vi C(m), D(m);
  for (int i = 0; i < m; i++) {
    cin >> C[i];
  }

  for (int i = 0; i < m; i++) {
    cin >> D[i];
  }

  if (m > n) {
    cout << 0;
    return;
  }

  int res = 0;
  for (int i = 0; i < m; i++) {
    int flag = f;
    for (int j = 0; j < n; j++) {
      if (C[i] == A[j]) {
        flag = t;
        if (D[i] > B[j]) {
          cout << 0;
          return;
        } else {
          res += B[j] - D[i];
        }
      }
    }

    if (flag) {
      cout << 0;
      return;
    }
  }

  for (int i = 0; i < n; i++) {
    bool flag = t;
    for (int j = 0; j < m; j++) {
      if (C[j] == A[i])
        flag = f;
    }

    if (flag) {
      res += B[i];
    }
  }

  res = res ? res * 2 : 1;

  cout << res;
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
