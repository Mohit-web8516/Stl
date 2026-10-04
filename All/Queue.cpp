// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     queue<int> q;

//     q.push(10);
//     q.push(20);
//     q.push(30);

//     cout << q.front() << endl;

//     q.pop();

//     cout << q.front();
// }


///////////////////////////////////////
//Priority_queue
#include <bits/stdc++.h>
using namespace std;

int main() {
    priority_queue<int> pq;

    pq.push(10);
    pq.push(30);
    pq.push(20);

    cout << pq.top();
}