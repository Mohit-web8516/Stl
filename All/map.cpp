#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, int> mp;

    mp["Alice"] = 90;
    mp["Bob"] = 80;

    for (auto p : mp)
        cout << p.first << " " << p.second << endl;
}