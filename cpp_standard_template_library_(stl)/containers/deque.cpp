#include <bits/stdc++.h>
using namespace std;

void explainDeque();

int main(){
    explainDeque();
    return 0;
}

void explainDeque(){

    deque<int> dq;
    dq.push_back(2);
    dq.emplace_back(3);
    dq.push_front(1);
    dq.emplace_front(0);


    for(auto it:dq){
        cout<<it<<" ";
    }
}