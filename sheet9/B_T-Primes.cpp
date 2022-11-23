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

int numOfDivisors(int n) {
    int div = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) div++;
    }
    return div;
}

void solve() {

    int n; cin >> n;
    while (n--) {
        int num; cin >> num;
        if( numOfDivisors(num) == 3) {
            for ()
        }

    }

}

int32_t main() {

    Gemy

    int tc = 1;
//    cin >> tc;

    while (tc--) {
        solve();
    }
}