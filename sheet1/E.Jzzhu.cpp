#include <bits/stdc++.h>
using namespace std;

#define line "\n"

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, c, num;
    cin >> n >> c;

    queue< pair<int ,int> >q;

    for (int i=0; i<n; i++) {
        cin >> num;
        q.emplace_back(num, i+1);
    }

//    for (auto i : dq)
//        cout << i.second << " " << i.first << endl;

    for (int i=0; i<n; i++) {

        while (!q.empty()) {

            if (q[i].first <= c) {
                q.pop_front();

            } else {
                q.front().first = q.front().first - c;

                q.push_back( q.front() );
                q.pop_front();
            }
        } else {
            cout << "output: " << endl;
            cout << q[0].second << " " << q[0].first << endl;

        }

    }
}