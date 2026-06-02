//Map
//MAP STORES DATA IN KEY VALUE PAIR....

/*Key = Unique identifier
Value = Data stored*/


///////////////////////////////
//INSERT using [] = m[key]=value;

// #include <iostream>
// #include <map>
// using namespace std;

// int main()
// {
//     map<int,string> m;

//     m[1]="Mohit";
//     m[2]="Rahul";
//     m[3]="Aman";

//     for(auto x:m)
//     {
//         cout<<x.first<<" "
//             <<x.second<<endl;
//     }
// }

//using insert()

// #include <iostream>
// #include <map>
// using namespace std;

// int main()
// {
//     map<int,string> m;

//     m.insert({1,"Mohit"});
//     m.insert({2,"Rahul"});

//     for(auto x:m)
//     {
//         cout<<x.first<<" "
//             <<x.second<<endl;
//     }
// }


////////
//using make_pair()


// #include <iostream>
// #include <map>
// using namespace std;

// int main()
// {
//     map<int,string> m;

//     m[3]="C";
//     m[1]="A";
//     m[2]="B";

//     //acessing value

//     m[1]="Mohit";

//     cout<<m[1] << endl;;

//     for(auto x:m)
//     {
//         cout<<x.first<<" "
//             <<x.second<<endl;
//     }
// } 



////////////////////////////////////////
//find()

// #include <iostream>
// #include <map>
// using namespace std;

// int main()
// {
//     map<int,string> m;

//     m[1]="Mohit";

//     auto it=m.find(1);

//     if(it!=m.end())
//         cout<<"Found";
//     else
//         cout<<"Not Found";
// }



/////////////////////////////////
// //erase()
// #include <iostream>
// #include <map>
// using namespace std;

// int main()
// {
//     map<int,string> m;

//     m[1]="A";
//     m[2]="B";
//     m[3]="C";

//     m.erase(2);

//     for(auto x:m)
//     {
//         cout<<x.first<<" "
//             <<x.second<<endl;
//     }
// }





///////////////////////////////
///////////////////////////////
///////////////////////////////
///////////////////////////////
///////////////////////////////
///////////////////////////////
///////////////////////////////
//Complete Program

#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int,string> m;

    m[3]="C";
    m[1]="A";
    m[2]="B";

    cout<<"Map:\n";

    for(auto x:m)
    {
        cout<<x.first<<" "
            <<x.second<<endl;
    }

    cout<<"Count 2: "
        <<m.count(2)<<endl;

    auto it=m.find(1);

    if(it!=m.end())
        cout<<"1 Found\n";

    m.erase(2);

    cout<<"After erase:\n";

    for(auto x:m)
    {
        cout<<x.first<<" "
            <<x.second<<endl;
    }

    cout<<"Size: "
        <<m.size()<<endl;
}