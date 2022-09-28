#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    string exp;
    cin >> exp;

    multiset<char>s;
    for (int i=0; i<exp.size(); i+=2) {
        s.insert(exp[i]);
    }

    cout << *s.begin();
    s.erase( s.begin() );

    for (auto i : s) cout << '+' << i;

}