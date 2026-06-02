//swap()

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> v1={10,20,30};
//     vector<int> v2={100,200};

//     v1.swap(v2);

//     cout<<"v1: ";
//     for(auto x:v1)
//     {
//         cout<<x<<" ";
//     }

//     cout<<endl;

//     cout<<"v2: ";
//     for(auto x:v2)
//     {
//         cout<<x<<" ";
//     }
// }



////////////////////////////////////////////

//clear ==remove all elements from vector
//clear() removes elements but capacity may remain.

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> v={10,20,30};

//     cout<<v.size() << endl;

//     v.clear();

//     cout << "Here is capacity" << endl;

//     cout<<v.capacity();
// }


///////////////////////////////////////////////
//EMPTY() ==
/*Checks whether vector is empty or not.

Returns:

1 → Empty
0 → Not empty*/


// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> v = {23};

//     cout<<v.empty();
// }


////////////////////
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> v;

//     cout<<v.empty();
// }


///////////////////////////////
//USING EMPTY AND CLEAR 
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> v={10,20};

//     v.clear();
    
//     if(v.empty())
//     {
//         cout<<"Vector is empty \n";
//     }
//     else
//     {
//         cout<<"Not empty \n";
//     }
//     cout << v.capacity();
// }