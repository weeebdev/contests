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

  int r = 0;
  int l = 1;
  while (l < n) {
    if (n - l != 0 && (n - l) % l == 0) {
      r++;
    }
    l++;
  }

  cout << r;

  return 0;
}
