// Bismillahir Rahmanir Rahim
#include <iostream>
#define ll long long
#define ull unsigned long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;
int main() {
  fastread();
  int n;
  char c1 = 'Q';
  cin >> n;

  int i = 0;
  int k = 0;
  while (i++ < n) {
    char c2;
    cin >> c2;

    if (c2 != c1) {
      c1 = c2;
      k++;
    }
  }

  cout << n - k;

  return 0;
}
