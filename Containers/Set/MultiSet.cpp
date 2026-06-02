/*Multiset
1.Duplicate elements allowed
2.Automatically sorted

This is the main idea.*/ 



//////////////////////////////////////////
//Insert()

// #include <iostream>
// #include <set>
// using namespace std;

// int main()
// {
//     multiset<int> ms;

//     ms.insert(10);
//     ms.insert(20);
//     ms.insert(10);
//     ms.insert(30);

//     for(auto x:ms)
//     {
//         cout<<x<<" ";
//     }
// }



/////////////////////////////////////
//Erase()

// #include <iostream>
// #include <set>
// using namespace std;

// int main()
// {
//     multiset<int> ms={10,10,20,30};

//     ms.erase(10);

//     for(auto x:ms)
//     {
//         cout<<x<<" ";
//     }
// }


//ERASE SINGLE OCCURRENCE

// #include <iostream>
// #include <set>
// using namespace std;

// int main()
// {
//     multiset<int> ms={10,10,20};

//     auto it=ms.find(10);

//     ms.erase(it);

//     for(auto x:ms)
//     {
//         cout<<x<<" ";
//     }
// }

/////////////////////////////////////////
////////////////////////////////////////

//FIND()

// #include <iostream>
// #include <set>
// using namespace std;

// int main()
// {
//     multiset<int> ms={10,20,20};

//     auto it=ms.find(20);

//     if(it!=ms.end())
//         cout<<"Found";
// }



///////////////////////////////
//COUNT()
// #include <iostream>
// #include <set>
// using namespace std;

// int main()
// {
//     multiset<int> ms={10,10,20,20,20};

//     cout<<ms.count(20);
// } 



////////////////////////////////
////////////////////////////////
////////////////////////////////
////////////////////////////////
////////////////////////////////
#include <iostream>
#include <set>
using namespace std;

int main()
{
    multiset<int> ms;

    ms.insert(10);
    ms.insert(20);
    ms.insert(10);
    ms.insert(20);

    cout<<"Multiset: ";

    for(auto x:ms)
    {
        cout<<x<<" ";
    }

    cout<<endl;

    cout<<"Count 20: "
        <<ms.count(20)<<endl;

    auto it=ms.find(10);

    ms.erase(it);

    cout<<"After erase: ";

    for(auto x:ms)
    {
        cout<<x<<" ";
    }

    cout<<endl;

    cout<<"Size: "
        <<ms.size()<<endl;
}