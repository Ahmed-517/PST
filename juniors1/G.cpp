#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int n; cin >> n;
    int e;

    set<int> s;

    while (n--) {
        cin >> e;
        s.insert(e);
    }

    if (s.size() == 1) {
        cout << "NO";
        return 0;
    }

    int cnt = 0;
    for (auto i : s) {
        if (cnt == 1) {
            cout << i;
            break;
        }
        cnt++;
    }

}