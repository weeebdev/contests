// Bismillahir Rahmanir Rahim
#include <iostream>
#define ll long long
#define ull unsigned long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;
int main() {
  fastread();
  int t;
  cin >> t;
  while (t--) {
    int a, b, c;
    cin >> a >> b >> c;

    int d = c % 2 + c / 2;

    a += d;
    b += c - d;

    if (a > b)
      cout << "First\n";
    else
      cout << "Second\n";
  }

  return 0;
}
