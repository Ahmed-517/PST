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

bool prime[100];
void sieve(int n) {
    for (int i = 2; i <=n; i++) prime[i] = 1;
    for (int i = 2; i <= n; i++) {
        if (prime[i])
            for (int j = i * i; j <= n; j+= i)
                prime[j] = 0;
    }

}

void solve() {

    sieve(20);
    for (int i = 1; i<= 20; i++) cout << i << " " << prime[i] << line;

}

int32_t main() {

    Gemy

    int tc = 1;
//    cin >> tc;

    while (tc--) {
        solve();
    }
}