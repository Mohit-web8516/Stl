#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << st.top() << endl;

    st.pop();

    cout << st.top();
}

////////////////////////////////////
/*
st.push(x);
st.pop();
st.top();
st.empty();
st.size();
*/