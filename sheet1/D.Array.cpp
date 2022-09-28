#include <bits/stdc++.h>
using namespace std;

#define line "\n"

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n; cin >> n;
    vector<int> v;
    int num;

    while (n--) {
        cin >> num;

        v.push_back(num);
    }

    int neg = 0, pos = 0;
    for (auto i : v) {
        if (i < 0) {
            neg++;
        } else if (i>0) {
            pos++;
        }
    }

    vector<int>nSet, pSet, zSet;

//    if (neg%2 != 0) {
//        for ()
//    }


}