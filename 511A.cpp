#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long s, a, b, c;
    cin >> n;

    while (n--) {
        cin >> s;
        cin >> a;
        cin >> b;
        cin >> c;

        cout << (s / c) + ((s / c) / a) * b << endl;
    }
    return 0;
}

