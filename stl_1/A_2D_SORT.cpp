#include <bits/stdc++.h>
using namespace std;

#define line "\n"

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int tc = 1;
    cin >> tc;

    while (tc--) {
        multimap<long, long>mp;

        int n; cin >> n;
        while (n--) {
            long x, y;
            cin >> x >> y;
            mp.insert({x, y});
        }

        for (auto i : mp) cout << i.first << " " << i.second << '\n';
    }
}