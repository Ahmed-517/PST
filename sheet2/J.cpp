#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        map<int, int> m1;

        for (int i=0; i<n; i++) {
            int num; cin >> num;
            m1[num]++;
        }

        map<int, int> m2;

        for (auto i : m1) m2[-i.second]++;

        long mx=0, it=0;
        for (auto i : m2) {
             it+=i.second;
             mx = max(mx, (long) it*-i.first);
        }

        cout << n-mx << "\n";
    }
}