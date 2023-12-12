#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, a, b, res = 0;
    cin >> n;
    cin >> k;

    while (n--) {
      cin >> a;
      if (a == 0) {
        break;
      }

      if (k == 0) {
        if (b == a) {
          res++;
          continue;
        } else {
          break;
        }
      }

      b = a;
      res++;
      k--;
    }
    
    cout << res;

    return 0;
}

