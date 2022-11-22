#include <bits/stdc++.h>
using namespace std;

// G - Replacing Elements
// Not Solved

#define line '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t; cin >> t;

    while (t--) {

        int n, d, x;
        string ans = "YES";
        cin >> n >> d;

        vector<int>v;
        cin >> x;
        for (int i=0; i<=n; i++) {
            v.push_back(x);
            if (x>d) ans = "NO";
        }

        sort(v.begin(), v.end());

        int sum = v[0] + v[1];

        if (sum <= d) {
            cout << "YES" << line;
        } else {
            cout << "NO" << line;
        }

    }

    return 0;
}