#include <iostream>
#include <math.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k, a1, ak;
    cin >> n;

    while (n--) {
      cin >> m;
      cin >> k;
      cin >> a1;
      cin >> ak;
      int res = 0;

      int r = m - k * ak - a1;
      if (r > 0) {
        res += m / k + m % k;
      } else {
int 
      }

      cout << res << endl;
    }
    return 0;
}

