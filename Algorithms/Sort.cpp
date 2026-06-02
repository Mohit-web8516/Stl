//sort

//syntax
//sort(begin,end);

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     vector<int> v={40,10,30,20};

//     sort(v.begin(),v.end());

//     for(auto x:v)
//     {
//         cout<<x<<" ";
//     }
// }


///////////////////////////////////////////////


//Descending sort
//syntax
// sort(begin,end,greater<int>());


// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     vector<int> v={40,10,30,20};

//     sort(v.begin(),v.end(),greater<int>());

//     for(auto x:v)
//     {
//         cout<<x<<" ";
//     }
// }



///////////////////////////////////////////////////////
//Comparator

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Custom comparator
bool cmp(pair<int,int> a, pair<int,int> b)
{
    // Sort by second
    if(a.second == b.second)
    {
        // If second same, first descending
        return a.first > b.first;
    }

    return a.second < b.second;
}

int main()
{
    vector<pair<int,int>> v=
    {
        {1,2},
        {3,1},
        {2,2},
        {4,1},
        {5,2}
    };

    sort(v.begin(), v.end(), cmp);

    for(auto x:v)
    {
        cout<<x.first<<" "
            <<x.second<<endl;
    }

    return 0;
}