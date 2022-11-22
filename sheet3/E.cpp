#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    string str;
    cin >> str;

    while (!str.empty() && str.back()=='0')
        str.pop_back();

    string rev = str;

    reverse(rev.begin(), rev.end());

    if (rev == str)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
