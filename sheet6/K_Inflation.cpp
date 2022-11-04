#include <bits/stdc++.h>
using namespace std;

#define line '\n'
#define ll long long

const ll N = 1e2 + 5, M = 1e7 + 5, mod = 998244353, lg = 21, INF  = 1e15;
ll a[N], n, k;

ll bs(ll lft, ll rght){
    ll st = 0, en = 1e11, mid, ans;
    while (st <= en){
        mid = (st + en) / 2;
        if(lft <= (rght + mid) * k)
            ans = mid, en = mid - 1;
        else
            st = mid + 1;
    }
    return ans;
}
void go() {

    cin >> n >> k;
    for(int i = 1; i <= n; i++) cin >> a[i];

    ll sum = 0, prf = a[1];
    for(int i = 2; i <= n; i++){
        ll lft = 100 * a[i];
        ll rght = prf;
        if(lft > k * rght){
            ll ret = bs(lft, rght);
            sum += ret;
            prf += ret;
        }
        prf += a[i];
    }
    cout << sum << line;
}
int32_t main() {

    int tc = 1;
    cin >> tc;
    while (tc--)
        go();
}