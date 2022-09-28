#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int n; cin >> n;

    vector<int> v;

    int num;
    while (n--) {
        cin >> num;
        v.push_back(num);
    }

    int sum = 0;
    int health = 0;
    int count = 0;
    for (auto i : v) {
        sum+=i;
        if (sum < 0) continue;
        else {
            health+=i;
            sum = health;
            count++;
        }
    }

    cout << count;

}