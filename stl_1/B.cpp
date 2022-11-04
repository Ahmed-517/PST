#include <bits/stdc++.h>
using namespace std;

#define line '\n'

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n; cin >> n;

    multimap<pair<int, int>, pair<int, string>> mp;

    while (n--) {
        string name;
        int a, v, s;
        cin >> name >> a >> v >> s;

        mp.insert({{a, v}, {s, name}});

    }

    for (auto i : mp) cout << i.first.first << " " << i.second.first << line;
}