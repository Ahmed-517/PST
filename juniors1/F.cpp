#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int n; cin >> n;
    int w = 0;

    vector<int> v;

    while (n--) {
        int c; cin >> c;
        v.push_back(c);
    }
    int sum=0;
    for (auto i : v) sum+=i;

    if (sum %2 == 0) {
        // Even
        for (auto i : v) {
            if (i%2 == 0)
                w++;
        }
    } else {
        for (auto i : v) {
            if (i%2 != 0)
                w++;
        }
    }

    cout << w;

}