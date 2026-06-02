/*Unordered Set in C++ STL
What is Unordered Set?

An unordered_set stores:

Unique elements only
No sorted order

This is the biggest difference from set*/


/////////////////////////////////////////////////

/*Important Functions

Main functions:

insert()
erase()
find()
count()
size()
empty()
clear()

Mostly same as set.*/


/////////////////////////
//Insert()

// #include <iostream>
// #include <unordered_set>
// using namespace std;

// int main()
// {
//     unordered_set<int> us;

//     us.insert(30);
//     us.insert(10);
//     us.insert(20);

//     for(auto x:us)
//     {
//         cout<<x<<" ";
//     }
// }


//////////////////////////
//Duplicate Handling

// #include <iostream>
// #include <unordered_set>
// using namespace std;

// int main()
// {
//     unordered_set<int> us;

//     us.insert(10);
//     us.insert(20);
//     us.insert(10);

//     for(auto x:us)
//     {
//         cout<<x<<" ";
//     }
// }


/////////////////////////////////
//erase()

// #include <iostream>
// #include <unordered_set>
// using namespace std;

// int main()
// {
//     unordered_set<int> us={10,20,30};

//     us.erase(20);

//     for(auto x:us)
//     {
//         cout<<x<<" ";
//     }
// }


////////////////////////////////////
//find()
// #include <iostream>
// #include <unordered_set>
// using namespace std;

// int main()
// {
//     unordered_set<int> us={10,20,30};

//     auto it=us.find(20);

//     if(it!=us.end())
//         cout<<"Found";
//     else
//         cout<<"Not Found";
// }


///////////////////////////////////


//Complete program

#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<int> us;

    us.insert(30);
    us.insert(10);
    us.insert(20);
    us.insert(10);

    cout<<"Unordered Set: ";

    for(auto x:us)
    {
        cout<<x<<" ";
    }

    cout<<endl;

    cout<<"Count 20: "
        <<us.count(20)<<endl;

    auto it=us.find(20);

    if(it!=us.end())
        cout<<"20 Found"<<endl;

    us.erase(20);

    cout<<"After erase: ";

    for(auto x:us)
    {
        cout<<x<<" ";
    }

    cout<<endl;

    cout<<"Size: "
        <<us.size()<<endl;

    cout<<"Empty: "
        <<us.empty()<<endl;
}