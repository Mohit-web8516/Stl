#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30};

    v.push_back(40);
    v.pop_back();

    cout << v[0] << endl;
    cout << v.size() << endl;

    for (int x : v)
        cout << x << " ";
}

/*v.push_back(x);   // add
v.pop_back();     // remove last
v.size();         // size
v.empty();        // true/false
v.front();        // first
v.back();         // last
v.clear();        // remove all
// */