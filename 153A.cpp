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
    string s;
    cin >> s;

    string a, b;
    int n = s.size();
    for (int i = 0; i < 2 * n; i++) {
      a += "()"[i % 2];
      b += ")("[i < n];
    }

    if (a.find(s) == string::npos) {
      cout << "YES\n" << a << endl;
    } else if (b.find(s) == string::npos) {
      cout << "YES\n" << b << endl;
    } else {
      cout << "NO\n";
    }
  }

  return 0;
}
