#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

   for (int i = 2; i < n; i+=2) {
       if ( (n-2)%2==0) {
           cout << "YES";
           return 0;
       }
   }

   cout << "NO";

    return 0;
}

