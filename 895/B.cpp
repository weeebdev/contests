// Bismillahir Rahmanir Rahim
// chrono::system_clock::now().time_since_epoch().count()
#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cstdio>
#include <iostream>
#include <map>
#include <utility>
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
  map<int, vi> d;

  cin >> n;

  vi keys;
  while (n--) {
    int di, si;
    cin >> di >> si;

    if (d.find(di) != d.end()) {
      d[di].push_back(si);
    } else {
      vi s;
      s.push_back(si);
      d.insert(make_pair(di, s));
      keys.push_back(di);
    }
  }

  sort(keys.begin(), keys.end());

  int k = INT_MAX;

  for (int i = 0; i < sz(keys); i++) {
    int s = *min_element(all(d[keys[i]]));

    int v = keys[i] + ((s - 1) / 2);

    k = min(v, k);
  }

  k = max(1, k);

  cout << k << endl;
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
