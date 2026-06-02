//deque == double ended queue
/*Insertion and deletion can happen from both ends.*/

/*Important Deque Functions

Main functions:

push_back()
push_front()
pop_back()
pop_front()
front()
back()
at()
size()
empty()
clear()*/




/////////////////////////////////////////////
// #include <iostream>
// #include <deque>
// using namespace std;

// int main()
// {
//     deque<int> d;

//     d.push_back(20);
//     d.push_back(30);

//     d.push_front(10);
//     d.push_front(5);

//     cout<<"Deque: ";

//     for(auto x:d)
//     {
//         cout<<x<<" ";
//     }

//     cout<<endl;

//     cout<<"Front: "
//         <<d.front()<<endl;

//     cout<<"Back: "
//         <<d.back()<<endl;

//     d.pop_front();
//     d.pop_back();

//     cout<<"After pop: ";

//     for(auto x:d)
//     {
//         cout<<x<<" ";
//     }

//     cout<<endl;

//     cout<<"Size: "
//         <<d.size()<<endl;

//     cout<<"Empty: "
//         <<d.empty()<<endl;
// }

//////////////////////////////////////////////
//print deque
//Unlike stack and queue, deque supports iterators and indexing, so printing deque is easy.

// #include <iostream>
// #include <deque>
// using namespace std;

// int main()
// {
//     deque<int> d={10,20,30,40};

//     for(auto x:d)
//     {
//         cout<<x<<" ";
//     }
// }