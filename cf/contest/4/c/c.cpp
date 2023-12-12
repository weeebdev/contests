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
  int n;
  cin >> n;
  vector<string> db(n);

  rep(i, 0, n) {
    string x;
    cin >> x;

    auto it = find(all(db), x);
    if (it != db.end()) {
      if (it->data() == x) {
        x += '1';
      } else {
        rep(i, 0, n) {
          int pos = sz(x) - 1 - i;
          if (x[pos] == '9') {
            x[pos] = '0';
          } else {
            x[pos] += 1;
            break;
          }
        }
      }

      db[i] = x;
      cout << db[i] << endl;
    } else {
      db[i] = x;
      cout << "OK" << endl;
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
