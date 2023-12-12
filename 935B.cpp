// Bismillahir Rahmanir Rahim
#include <iostream>
#define ll long long
#define ull unsigned long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;
int main() {
  fastread();
  int n;

  cin >> n;

  char c;
  int x = 0, y = 0, r = 0;

  while (n--) {
    cin >> c;

    if (c == 'R')
      x++;
    else if (c == 'U')
      y++;

    if (x == y)
      r++;
  }

  cout << r;

  return 0;
}
