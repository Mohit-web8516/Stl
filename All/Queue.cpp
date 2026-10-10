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
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     priority_queue<int> pq;

//     pq.push(10);
//     pq.push(30);
//     pq.push(20);
  

//     cout << pq.top();
// }


//////////////////////////////////
///Min heap 
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     priority_queue<int, vector<int>, greater<int>> pq;

//     pq.push(30);
//     pq.push(10);
//     pq.push(20);

//     cout << pq.top();
// }



///////////////////////////////
//lowe_bound() and upper_bound()

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> v = {1, 2, 2, 2, 4, 5};

//     auto a = lower_bound(v.begin(), v.end(), 2);
//     auto b = upper_bound(v.begin(), v.end(), 2);

//     cout << a - v.begin() << endl;
//     cout << b - v.begin() << endl;
// }


//////////////////////////////////
// find()
/*vector<int> v = {10, 20, 30};

auto it = find(v.begin(), v.end(), 20);

if (it != v.end())
    cout << "Found";*/

//////////////////////////////////
//min()/max()
/*int a = 10, b = 20;

cout << min(a, b) << endl;
cout << max(a, b) << endl;*/

///////////////////////////////
//swap()
/*int a = 10;
int b = 20;

swap(a, b);

cout << a << " " << b;*/
