#include <bits/stdc++.h>
using namespace std;

#define line '\n'
#define ll long long

void go() {
    int n, x;
    cin >> n >> x;

    int a[n + 2];
    for (int i = 1; i<=n; i++) cin >> a[i];

    int st = 1, en = n, mid, ans = -1, iter = 0;
    while (st <= en) {
        iter++;
        mid = (st + en) / 2;

        if (a[mid] == x) {
            ans = 1;
            break;
        } else if (a[mid] > x) {
                en = mid - 1;
        } else {
            st = mid + 1;
        }

    }
    cout << iter << line;
    if (ans == -1) cout << "Not Found" << line;
    else cout << ans << line;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    go();

    return 0;
}