// Bismillahir Rahmanir Rahim
#include <iostream>
#define ll long long
#define ull unsigned long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;
int main() {
  fastread();

  string s;
  cin >> s;

  for (int i = 0; i < s.size(); i++) {
    if (i == 0 && s[i] >= 'a') {
      s[i] = s[i] - 'a' + 'A';
    }
  }
  cout << s;

  return 0;
}
