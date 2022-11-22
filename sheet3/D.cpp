#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    vector<int>v;
    string str;
    cin >> str;

    for (int i=0; i<=str.length(); i=i+2) {
        v.emplace_back(str[i]);
    }

    sort(v.begin(), v.end());

    cout << v[0]-'0';

    for (int i=1; i<v.size(); i++) {
        cout << '+' << v[i]-'0';
    }

    return 0;
}