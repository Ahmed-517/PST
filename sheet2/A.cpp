#include <bits/stdc++.h>
using namespace std;

/*
 * distinct characters ( odd ) --> Male
 * distinct characters ( even ) --> Female
 */

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    set<char>s;
    string name; cin >> name;

    for (int i=0; i<name.size(); i++)
        s.insert(name[i]);

    int size = s.size();

    if ( size % 2 == 0 ) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";

}
