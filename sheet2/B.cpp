#include <bits/stdc++.h>
using namespace std;

#define line "\n"

/*
 * Frequency Map
 */

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    map<string, int>m;
    int n; cin >> n;

    string name;

    while (n--) {
        cin >> name;

        m[name]++;

        if (m[name] > 1 )
            cout << name << m[name]-1 << line;
        else
            cout << "OK" << line;
    }

}