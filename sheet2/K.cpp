#include <bits/stdc++.h>
#define ll long long
using namespace std;
void Tolower(string& s)
{
    for(auto &i: s)
    {
        if(i>='A' && i <= 'Z')
            i+=32;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    set<string>set;
    string substr = "";
    int cnt = 0;
    while (cin >> s) {
        Tolower(s);
        substr = "";
        for (char i: s) {
            cnt++;
            if (i >= 'a' && i <= 'z')
                substr = substr + i;
            else {
                if (substr.empty())
                    continue;
                else {
                    set.insert(substr);
                    substr = "";
                }
            }
        }
        if (!substr.empty())
            set.insert(substr);
    }
    for(auto& i : set)
        cout << i << "\n";
    return 0;
}
