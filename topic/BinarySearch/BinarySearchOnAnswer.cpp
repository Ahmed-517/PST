#include <bits/stdc++.h>
using namespace std;

#define line '\n'
#define ll long long

bool Broken(int mid) {
    cout << "Current Floor " << mid << endl;
    int ans;

    // 0 || 1
    cin >> ans;

    return ans;
}

void go() {
    int n;
    cin >> n;

    int low = 1, up = n, mid, ans = -1, iter = 0;
    while (low <= up) {

        mid = (low + up) / 2;

        if ( Broken(mid) ) {
            up = mid - 1;
        } else {
            ans = mid;
            low = mid + 1;
        }

    }
    cout << ans << line;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    go();

    return 0;
}