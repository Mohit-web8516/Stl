/*just like map.

But difference:

Map
Unique keys only
Multimap
Duplicate keys allowed*/

//////////////////////////////////////
//Complete Program

#include <iostream>
#include <map>
using namespace std;

int main()
{
    multimap<int,string> mm;

    mm.insert({1,"A"});
    mm.insert({1,"B"});
    mm.insert({2,"C"});

    cout<<"Multimap:\n";

    for(auto x:mm)
    {
        cout<<x.first<<" "
            <<x.second<<endl;
    }

    cout<<"Count 1: "
        <<mm.count(1)<<endl;

    auto it=mm.find(1);

    if(it!=mm.end())
        cout<<"Found\n";

    mm.erase(it);

    cout<<"After erase:\n";

    for(auto x:mm)
    {
        cout<<x.first<<" "
            <<x.second<<endl;
    }

    cout<<"Size: "
        <<mm.size()<<endl;
}