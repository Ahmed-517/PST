#include <bits/stdc++.h>
using namespace std;

#define Gemy ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define line '\n'
#define ll long long
#define ull unsigned long long
#define ld long double
#define F first
#define S second
#define sz(x) (int)(x).size()

const ll N = 1e5 + 10;

int n, k;
ll a[N], b[N];

bool check(int mid) {
    int tmpPowder = k;
    for (int i = 1; i<=n; i++) {
        ll need = mid * a[i];
        if (b[i] >= need) continue;
        if (b[i] + tmpPowder >= need) {
            tmpPowder -= (need - b[i]);
            continue;
        }
        return false;
    }
    return true;
}

void solve() {

    cin >> n >> k;

    for (int i = 1; i<=n; i++) cin >> a[i];
    for (int i = 1; i<=n; i++) cin >> b[i];

    ll st = 0, en = 2e9, mid, ans;

    while (st <= en) {
        mid = (st + en) / 2;

        if (check(mid)) {
            ans = mid;
            st = mid + 1;
        } else {
            en = mid - 1;
        }
    }

    cout << ans << line;
}

int32_t main() {

    Gemy

    int tc = 1;
//    cin >> tc;

    while (tc--) {
        solve();
    }
}