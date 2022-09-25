#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define ll long long

// back - Print number from back and then erase it
// front - Print number from front and then erase it
// reverse - Reverses all elements in queue
// push_back N - Add element N to back
// toFront N - Put element N to front
// All numbers will be 0 ≤ N ≤ 100
bool rev;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;

    deque<int>dq;

    while (t--) {
        string query;
        int num;
        cin >> query;

        if (query == "back") {

            if (dq.empty()) cout << "No job for Ada?" << el;
            else {
                if (rev) {
                    cout << dq.front() << el;
                    dq.pop_front();
                } else {
                    cout << dq.back() << el;
                    dq.pop_back();
                }
            }

        } else if (query == "front") {

            if (dq.empty()) cout << "No job for Ada?" << el;
            else {
                if (rev) {
                    cout << dq.back() << el;
                    dq.pop_back();
                } else {
                    cout << dq.front() << el;
                    dq.pop_front();
                }
            }

        } else if (query == "reverse") {

            rev = !rev;

        } else if (query == "push_back") {

            cin >> num;
            if (rev) dq.push_front(num);
            else dq.push_back(num);

        } else if (query == "toFront") {

            cin >> num;
            if (rev) dq.push_back(num);
            else dq.push_front(num);

        }


    }
}