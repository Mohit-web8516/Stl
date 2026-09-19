/*What is Set?

A set is a container that stores:

1.Unique elements only
2.Automatically sorted order
*/

/*Important Set Functions

Main functions:

insert()
erase()
find()
count()
size()
empty()
clear()*/



/////////////////////////////////////////

///insert

// #include <iostream>
// #include <set>
// using namespace std;

// int main()
// {
//     set<int> s;

//     s.insert(30);
//     s.insert(10);
//     s.insert(20);

//     for(auto x:s)
//     {
//         cout<<x<<" ";
//     }
// }


////////////////////////////////

//duplicate handling

// #include <iostream>
// #include <set>
// using namespace std;

// int main()
// {
//     set<int> s;

//     s.insert(10);
//     s.insert(20);
//     s.insert(10);
//     s.insert(20);

//     for(auto x:s)
//     {
//         cout<<x<<" ";
//     }
// }




////////////////////////////////////////////
//Erase()


// #include <iostream>
// #include <set>
// using namespace std;

// int main()
// {
//     set<int> s={10,20,30};

//     s.erase(20);

//     for(auto x:s)
//     {
//         cout<<x<<" ";
//     }
// }


////////////////////////////////////

//find()

// #include <iostream>
// #include <set>
// using namespace std;

// int main()
// {
//     set<int> s={10,20,30};

//     auto it=s.find(20);

//     if(it!=s.end())
//         cout<<"Found";
//     else
//         cout<<"Not Found";
// }

//////////////////////////////////////////

//complete program

#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;

    s.insert(30);
    s.insert(10);
    s.insert(20);
    s.insert(10);

    cout<<"Set: ";

    for(auto x:s)
    {
        cout<<x<<" ";
    }

    cout<<endl;

    cout<<"Count 20: "
        <<s.count(20)<<endl;

    auto it=s.find(20);

    if(it!=s.end())
        cout<<"20 Found"<<endl;

    s.erase(20);

    cout<<"After erase: ";

    for(auto x:s)
    {
        cout<<x<<" ";
    }

    cout<<endl;

    cout<<"Size: "
        <<s.size()<<endl;

    cout<<"Empty: "
        <<s.empty()<<endl;
}

