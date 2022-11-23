#include <bits/stdc++.h>
using namespace std;

#define Gemy ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define line '\n'
#define ll long long

int n, k;
vector<ll> cost, have;

bool can(ll num) {

    ll mag = k;

    for (int i=0; i<n; i++) {
        ll co = num * cost[i];
        if (co <= have[i]) continue;

    }

}

void solve() {
    cin >> n >> k;
    have = vector<ll>(n);
    cost = vector<ll>(n);

    for (int i=0; i<n; i++) cin >> cost[i];

    for (int i=0; i<n; i++) cin >> have[i];

    ll l = 0, r = 1e12, ans = 0;

    while (l <= r) {
        ll mid = (l + r) / 2;
        if (can(mid)) {
            l = mid + 1;
            ans = mid;
        } else r = mid - 1;
    }
    cout << ans;
}

int32_t main() {

    Gemy

    int tc = 1;
//    cin >> tc;

    while (tc--) {
        solve();
    }
}