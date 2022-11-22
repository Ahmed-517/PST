#include <iostream>
using namespace std;

// Again Twenty Five!

int main() {
    long long x; cin >> x;

    if (x%2 == 0) {
        cout << x / 2 << endl;
        return 0;
    } else {
        x = x / 2;
        cout << -(x+1) << endl;
        return 0;
    }

    return 0;
}
