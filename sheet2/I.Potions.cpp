#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int n; cin >> n;
    int a[n+2];

    for (int i=0; i<n; i++) cin >> a[i];

    ll sum = 0;
    int cnt = 0;
    priority_queue<int, vector<int>, greater<>>pq;

    for (int i = 0; i < n; i++) {
        sum+=a[i];
        if(a[i] < 0) pq.push(a[i]);

        if (sum < 0) {
            sum -= pq.top();
            pq.pop();
            cnt++;
        }
    }
    cout << n - cnt << '\n';

    return 0;
}