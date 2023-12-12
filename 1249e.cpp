// Bismillahir Rahmanir Rahim
#include <iostream>
#define ll long long
#define ull unsigned long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;
int main() {
  fastread();
  int x, y, z, t1, t2, t3;
  cin >> x >> y >> z >> t1 >> t2 >> t3;

  int s = abs(x - y) * t1;
  int e = (abs(z - x) + abs(x - y)) * t2 + 3 * t3;

  if (e <= s)
    cout << "YES";
  else
    cout << "NO";

  return 0;
}
