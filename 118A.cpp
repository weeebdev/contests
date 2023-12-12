#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    string vowels = "AOYEUIaoyeui";
    
    for (int i = 0; i < s.size(); i++) {
      if (vowels.find(s[i]) != std::string::npos) continue;
      cout << '.' << (char)(s[i] < 92 ? s[i] + 32 : s[i]);
    }

    return 0;
}

