#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    if (s.size() < 3) {
        cout << s;
        return 0;
    }

    for (int i = 0; i < s.size() - 2; i+=2) {
        for (int j = 0; j < s.size() - i - 2; j+=2) {
            if (s[j] > s[j + 2]) {
                char temp = s[j];
                s[j] = s[j + 2];
                s[j + 2] = temp;
            }
        }
    }

    cout << s;

    return 0;
}

