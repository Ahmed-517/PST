#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n = 1;
    cin >> n;

    int rooms = 0;
    while (n--) {

        int people, capacity, free;
        cin >> people >> capacity;
        free = capacity - people;

        if (free >= 2) rooms++;

    }
    cout << rooms;
}