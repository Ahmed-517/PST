#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int x; cin >> x;
    int steps = 0;

    while (x>=5) {
        x -= 5;
        steps++;
//        cout << "-5" << endl;
    }
    while (x>=4) {
        x-=4;
        steps++;
//        cout << "-4" << endl;
    }
    while (x>=3) {
        x-=3;
        steps++;
//        cout << "-3" << endl;
    }
    while (x>=2) {
        x-=2;
        steps++;
//        cout << "-2" << endl;
    }
    while (x>=1) {
        x-=1;
        steps++;
//        cout << "-1" << endl;
    }

    cout << steps;
}