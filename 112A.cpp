#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s1, s2;

    cin >> s1;
    cin >> s2;

    for (int i = 0; i < s1.size(); i++) {
      s1[i] += s1[i] < 92 ? 32 : 0;
      
      s2[i] += s2[i] < 92 ? 32 : 0;
    }

    if (s1 == s2) {
      cout << 0;
    } else if (s1 > s2) {
      cout << 1;
    } else {
      cout << -1;
    }

    return 0;
}

