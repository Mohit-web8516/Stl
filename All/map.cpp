// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     map<string, int> mp;

//     mp["Alice"] = 90;
//     mp["Bob"] = 80;

//     for (auto p : mp)
//         cout << p.first << " " << p.second << endl;
// }

//Unordered_map
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 2, 3, 1, 2};

    unordered_map<int, int> freq;

    for (int x : v)
        freq[x]++;

    for (auto p : freq)
        cout << p.first << " -> " << p.second << endl;
}