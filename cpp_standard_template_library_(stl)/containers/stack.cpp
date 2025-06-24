#include <bits/stdc++.h>
using namespace std;

void explainStack();

int main()
{
    explainStack();
    return 0;
}

void explainStack()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.emplace(5 );

    while(!st.empty()){
        cout<<st.top()<< ' ';
        st.pop();
    }
}