// Bismillahir Rahmanir Rahim
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

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }

    int j = 0, s = 0;
    while (true) {
      bool f = true;
      for (int i = j; i < n - 1; i++) {
        if (v[i] > v[i + 1]) {
          j = i;
          f = false;
          break;
        }
      }

      if (f)
        break;

      vector<int> a, b;
      a.insert(a.end(), v.begin(), v.begin() + j);

      for (int i = j; i < n; i++) {
        if (v[j] > v[i])
          a.push_back(v[i]);
        else
          b.push_back(v[i]);
      }

      a.insert(a.end(), b.begin(), b.end());
      v = a;

      s++;
    }

    cout << s << endl;
  }

  return 0;
}
