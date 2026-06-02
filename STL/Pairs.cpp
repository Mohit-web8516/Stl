/*What is Pair?

A pair is an STL container that stores two values together.

These values can be:

Same data type
Different data type

Think of pair as a 2-value box.*/

////////////////////////////////////
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     pair<int, int> p ;

//     p.first = 10;
//     p.second = 20;

//     cout << p.first << " " << p.second;
//     return 0;
// }

/////////////////////////////
//nested pair
#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, pair<int,int >> p = {1,{3,5}};


    cout << p.first << " " << p.second.first ;
    return 0;
}