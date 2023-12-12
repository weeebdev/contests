#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int x = 0;
    
    while (n--) {
      string l;
      cin >> l;

      if (l.find('+')!=std::string::npos) {
        x++;
      } else {
        x--;
      }
    }

    cout << x;

    return 0;
}


