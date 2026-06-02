/*What is Priority Queue?

A Priority Queue is a special queue where elements are removed based on priority, not insertion order.*/


//ccomplete program

// #include <iostream>
// #include <queue>
// using namespace std;

// int main()
// {
//     priority_queue<int> pq;

//     pq.push(10);
//     pq.push(50);
//     pq.push(20);
//     pq.push(30);

//     cout<<"Top: "
//         <<pq.top()<<endl;

//     pq.pop();

//     cout<<"After pop Top: "
//         <<pq.top()<<endl;

//     cout<<"Size: "
//         <<pq.size()<<endl;

//     cout<<"Empty: "
//         <<pq.empty()<<endl;
// }



////////////////////////////////////
//Printing priority queue

//max-heap (default) = = largest value get high priority


// #include <iostream>
// #include <queue>
// using namespace std;

// int main()
// {
//     priority_queue<int> pq;

//     pq.push(10);
//     pq.push(50);
//     pq.push(20);
//     pq.push(30);

//     while(!pq.empty())
//     {
//         cout<<pq.top()<<" ";
//         pq.pop();
//     }
// }



////////////////////////////////////////
//moin-heap === smallest value get first priority
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<
        int,
        vector<int>,
        greater<int>
    > pq;

    pq.push(10);
    pq.push(50);
    pq.push(20);
    pq.push(30);

    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
}