#include <bits/stdc++.h>
using namespace std;

bool found;
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int n; cin >> n;
    string row[n];

    for (int i=0; i<n; i++) cin >> row[i];

    for (int i=0; i<n; i++) {

        if (row[i][0]=='O' && row[i][1]=='O') {
            row[i][0] = '+';
            row[i][1] = '+';
            cout << "YES" << '\n';
            found = 1;
            break;
        } else if (row[i][3]=='O' && row[i][4]=='O') {
            row[i][3] = '+';
            row[i][4] = '+';
            cout << "YES" << '\n';
            found = 1;
            break;
        }

    }

    if (found == 1) {
        for (int i=0; i<n; i++) cout << row[i] << '\n';
    } else {
        cout << "NO";
    }
}