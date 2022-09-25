#include <bits/stdc++.h>
using namespace std;

#define line "\n"

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int t;
    cin >> t;

    while (t--) {

        int n, m;
        cin >> n >> m;

        int sum = n+m;

        set<int>s;

        while (sum--) {
            int num; cin >> num;
            s.insert(num);
        }

        cout << (n+m)-s.size() << line;

    }

}