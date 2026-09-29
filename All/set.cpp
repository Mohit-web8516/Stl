// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     set<int> s = {5, 2, 5, 1, 3};

//     s.insert(4);
//     s.erase(2);

//     for (int x : s)
//         cout << x << " ";
// }

//unordered set

#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_set<int> s;

    s.insert(10);
    s.insert(20);
    s.insert(10);

    if (s.count(20))
        cout << "Found";
}