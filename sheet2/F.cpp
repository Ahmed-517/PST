#include <bits/stdc++.h>
using namespace std;

#define line "\n"

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;

    string name;
    map<string, int>m;

    for (int i = 0; i<n; i++) {
        cin >> name;
        m[name] = i;
    }

    vector< pair<int, string> >v;

    for (auto i : m)
        v.emplace_back(i.second, i.first);

    sort(v.rbegin(), v.rend());

    for (auto i : v)
        cout << i.second << line;

}