//push_back() == insert at end 
//push_front() == insert at beginning

// #include <iostream>
// #include <list>
// using namespace std;

// int main()
// {
//     list<int> l;
     
//     //push_back()
//     l.push_back(10);
//     l.push_back(20);

//     //push_front()
//     l.push_front(70);
//     l.push_front(90);

//     for(auto x:l)
//     {
//         cout<<x<<" ";
//     }
// }

///////////////////////////////////////

//pop_back() ==Remove last element
//pop_front() == Remove first element

// #include <iostream>
// #include <list>
// using namespace std;

// int main()
// {
//     list<int> l={32,76,89,06};

//     l.pop_back();
//     l.pop_front();

//     for(auto x:l)
//     {
//      cout << x << " ";
//     }
// }


///////////////////////////////////////////////
//Traversal using iterator

// #include <iostream>
// #include <list>
// using namespace std;

// int main()
// {
//     list<int> l={10,20,30};

//     list<int>::iterator it;

//     for(it=l.begin();
//         it!=l.end();
//         it++)
//     {
//         cout<<*it<<" ";
//     }
// }



//////////////////////////////////////////////
// #include <iostream>
// #include <list>
// using namespace std;

// int main()
// {
//     list<int> l={32,76,89,06};

//     // l.push_back(23);
//     // // l.pop_front();
//     // l.emplace_back(3333); ////also inserts at end 
//     l.push_front(54545); 
//     l.emplace_front(23); //insert at beginning 

//     for(auto x:l)
//     {
//      cout << x << " ";
//     }
// }