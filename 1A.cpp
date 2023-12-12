#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, m, a;
    cin >> n;
    cin >> m;
    cin >> a;

    long long k = (n+a-1)/a;
    long long s = (m+a-1)/a;

    cout << k * s;

    return 0;
}

