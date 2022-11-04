#include <bits/stdc++.h>
using namespace std;

#define el '\n'

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int n;
    cin >> n;
    map<int, int>mp;
    set<int>st;
    for(int i=0; i < n; i++) {
        int x; cin >> x;
        mp[x]++;
        if (mp[x]>=3) st.insert(x);
    }

    cout << st.size() << el;
    for (auto i : st) cout << i << " ";
    cout << el;
}