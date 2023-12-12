#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int res = 0;

    while (n--) {
      int p, v, t;
      cin >> p;
      cin >> v;
      cin >> t;

      if ((p + v + t) > 1) {
        res++;
      }
    }

    cout << res;

    return 0;
}

