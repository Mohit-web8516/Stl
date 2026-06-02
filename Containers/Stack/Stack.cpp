//Stack Creation
// #include <iostream>
// #include <stack>
// using namespace std;

// int main()
// {
//     stack<int> st;

//     st.push(10);
//     st.push(20);
//     st.push(30);

//     cout<<"Top: "<<st.top()<<endl;

//     st.pop();

//     cout<<"After pop top: "
//         <<st.top()<<endl;

//     cout<<"Size: "
//         <<st.size()<<endl;

//     cout<<"Empty: "
//         <<st.empty()<<endl;

//     return 0;
// }



////////////////////////////////

//HOW TO PRINT STACK

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);

    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
}