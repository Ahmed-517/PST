#include <bits/stdc++.h>
using namespace std;

#define line "\n"

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    set<string>s;

    string str; cin >> str;

    string word = "";

    for (int i=0; i<str.size(); i++) {
        if (isalpha(str[i])) {
            word += (char) tolower(str[i]);
        } else continue;
    }

    cout << word;

}