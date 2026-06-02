// //QUEUE
// #include <iostream>
// #include <queue>
// using namespace std;

// int main()
// {
//     queue<int> q;

//     q.push(10);
//     q.push(20);
//     q.push(30);

//     cout<<"Front: "<<q.front()<<endl;
//     cout<<"Back: "<<q.back()<<endl;

//     q.pop();

//     cout<<"After pop Front: "
//         <<q.front()<<endl;

//     cout<<"Size: "
//         <<q.size()<<endl;

//     cout<<"Empty: "
//         <<q.empty()<<endl;

//     return 0;
// }





///////////////////////////

//how to print queue
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
}