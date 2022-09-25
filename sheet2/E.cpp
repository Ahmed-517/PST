#include <bits/stdc++.h>
using namespace std;

/*
 * Problem E. Keyboard
 */

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    char dir; cin >> dir;
    string word; cin >> word;
    vector<char>output;

    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";

    if (dir == 'R') {

        for (int i=0; i<word.size(); i++) {
            for (int j=0; j<keyboard.size(); j++) {
                if (word[i] == keyboard[j])
                    output.push_back(keyboard[j-1]);
            }
        }

    } else if (dir == 'L') {

        for (int i=0; i<word.size(); i++) {
            for (int j=0; j<keyboard.size(); j++) {
                if (word[i] == keyboard[j])
                    output.push_back(keyboard[j+1]);
            }
        }

    }

    for (auto i : output) cout << i;
}