// Bismiintahir Rahmanir Rahim
#include <iostream>
#include <vector>
#define ll long long
#define ull unsigned long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;
int main() {
  fastread();
  int t;

  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> v(n), v1(n);

    int k = 0;
    while (k < n) {
      int a;
      cin >> a;
      v[k] = a;
      v1[k] = a;
      k++;
    }

    if (v[0] != n) {
      cout << "NO\n";
      continue;
    }

    vector<int> v2(v[0]);

    n = 0;
    while (n < v[0]) {
      for (int i = 0; i < v1.size(); i++) {
        if (v1[i] - 1 >= 0) {
          v1[i]--;
          v2[n]++;
        }
      }
      n++;
    }

    if (v.size() != v2.size()) {
      cout << "NO" << endl;
      continue;
    }

    bool f = false;
    for (int i = 0; i < v.size(); i++) {
      if (v[i] != v2[i]) {
        cout << "NO" << endl;
        f = true;
        break;
      }
    }

    if (!f)
      cout << "YES" << endl;
  }

  return 0;
}
