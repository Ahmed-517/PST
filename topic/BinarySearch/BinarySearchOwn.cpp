#include <bits/stdc++.h>
using namespace std;

#define line '\n'

void binarySearch() {

    int n; cin >> n;

    int a[n+2];

    for (int i = 1; i<=n ;i++) cin >> a[i];

    cout << "X=";
    int x; cin >> x;

    int st = 1, end = n, mid, ans = 0;

    while (st<=end) {

        mid = (st + end) / 2;

        if (mid == x) {
            cout << "Found" << line;
            break;
        } else if (x > mid) {
            st = mid + 1;
        } else if (x < mid) {
            end = mid - 1;
        }

    }

}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    binarySearch();
}