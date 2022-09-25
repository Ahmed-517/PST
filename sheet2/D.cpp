#include <bits/stdc++.h>
using namespace std;

/*
 * Problem D. Anton and Letters
 */

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    string str;
    getline(cin, str);
    set<char>s;

    if (str.size()==2) cout << 0;
    else {
        for (int i=1; i < str.size(); i+=3)
            s.insert(str[i]);

        cout << s.size();
    }

}