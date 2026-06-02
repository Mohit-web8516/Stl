// #include <iostream>
// #include <vector>
// #include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<double> v = {5.5,2,8,1};

    sort(v.begin(), v.end());

    for(int x : v)
        cout << x << " ";
}