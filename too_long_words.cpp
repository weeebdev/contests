#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    while (n--) {
      string s;
      cin >> s;
      int l = s.length();
      if (l > 10) {
        cout << s[0] << l - 2 << s[l-1];
      } else {
        cout << s;
      }
      cout << "\n";
    }

    return 0;
}

