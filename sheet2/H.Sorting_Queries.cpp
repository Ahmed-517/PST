#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int n; cin >> n;

    int query;
    long num;

    deque<int>dq;
    priority_queue<int>pq;

    while (n--) {

        cin >> query;
        if (query == 1) {

            cin >> num;
            dq.push_back(num);

        } else if (query == 2) {

            if (pq.empty()) {
                cout << dq[0] << "\n";
                dq.pop_front();
            } else {
                cout << -pq.top() << "\n";
                pq.pop();
            }

        } else if (query == 3) {

            for (int i=0; i<dq.size(); i++)
                pq.push(-dq[i]);

            dq.clear();
        }

    }
}