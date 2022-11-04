#include <bits/stdc++.h>
using namespace std;

int lCount;
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    string num;
    cin >> num;

    for (char i : num) {
        if (i == '4' || i == '7') lCount++;
    }

    if (lCount == 7 || lCount == 4) cout << "YES";
    else cout << "NO";

}