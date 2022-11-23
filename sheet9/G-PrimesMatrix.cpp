#include <bits/stdc++.h>
using namespace std;

#define Gemy ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define line '\n'
#define ll long long
#define ull unsigned long long
#define ld long double
#define mod 1000000009
#define F first
#define S second
#define sz(x) (int)(x).size()

const ll N = 1e5 + 2;

bool prime[N];
int suf[N];
void sieve() {
    for (int i = 2; i < N; i++) prime[i] = true;
    for (int i = 4; i < N; i += 2) prime[i] = false;

    for (ll i = 3; i < N; i += 2)
        if (prime[i])
            for (ll j = i * i; i < N; j += i)
                prime[j] = false;
}

void solve() {

//    for (int i = N - 1; i >= 2; i--) {
//        if (prime[i]) suf[i] = 1;
//        else suf[i] = suf[i + 1];
//    }
    for (int i = N - 2; i >= 1; i--) suf[i] = (prime[i] ? i : suf[i + 1]);

    int n, m;
    cin >> n >> m;

    int a[n + 2][m + 2];

    for (int i = 1; i <= n; i++)
        for (int j = 1; i <= n; i++)


}

int32_t main() {

    Gemy

    int tc = 1;
//    cin >> tc;

    while (tc--) {
        solve();
    }
}