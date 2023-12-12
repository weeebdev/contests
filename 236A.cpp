// Bismillahir Rahmanir Rahim
#include <iostream>
#include <set>
#define ll long long
#define ull unsigned long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;
int main() {
  fastread();
  string s;
  cin >> s;

  set<char> l;

  for (int i = 0; i < s.size(); i++)
    l.insert(s[i]);

  if (l.size() % 2 == 0) {
    cout << "CHAT WITH HER!";
  } else {
    cout << "IGNORE HIM!";
  }

  return 0;
}
