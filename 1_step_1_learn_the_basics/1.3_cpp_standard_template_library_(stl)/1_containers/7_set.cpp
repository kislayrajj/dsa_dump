#include <bits/stdc++.h>
using namespace std;

void explainSet();

int main(){
    explainSet();
    return 0;
}

void explainSet()
{
    set<int> st;
    st.insert(1);
    st.emplace(2);
    st.insert(2);
    st.insert(2);
    st.insert(3);
    st.insert(3);
    st.insert(4);

    auto it= st.find(1);
    cout<<*it<<endl;
    st.erase(1);
    cout<<st.count(3)<<endl;
    cout<<*st.begin()<<endl;
    cout<<*st.rbegin()<<endl;


    for (auto val : st)
    {
        cout << val << " ";
    }
}