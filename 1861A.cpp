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

  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '3') {
      cout << 31 << endl;
      break;
    }

    if (s[i] == '1') {
      cout << 13 << endl;
      break;
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