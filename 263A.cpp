#include <iostream>
#include <math.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int k = -1;
    int i, j = 0;
    
    while (k++ < 24) {
      cin >> n;
      if (n == 1) {
        i = k % 5;
        j = k/5;
        cout << abs(2 - i) + abs(2-j);
      }
    }

    return 0;
}

