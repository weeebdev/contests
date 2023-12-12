// Bismillahir Rahmanir Rahim
// chrono::system_clock::now().time_since_epoch().count()
#include <bits/stdc++.h>
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
#define w(x) while (x)
#define cend cout << endl
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vl;
bool mcases = f;
void yes() { cout << "YES" << endl; }
void no() { cout << "NO" << endl; }

void solve() {
  string s1, s2, s3;
  map<char, int> m, m2;

  cin >> s1 >> s2 >> s3;

  for (char c : s1) {
    m[c]++;
  }

  for (char c : s2) {
    m[c]++;
  }

  for (char c : s3) {
    m2[c]++;
  }

  for (auto p : m) {
    if (m2[p.fi] != p.se) {
      return no();
    }
  }

  for (auto p : m2) {
    if (m[p.fi] != p.se) {
      return no();
    }
  }

  return yes();
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
