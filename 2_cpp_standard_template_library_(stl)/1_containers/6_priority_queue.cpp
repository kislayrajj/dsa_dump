#include<bits/stdc++.h>
using namespace std;

void explain_PQ();

int main(){
    explain_PQ();
    return 0;
}

void explain_PQ(){
    priority_queue<int> pq;
    pq.push(1);
    pq.push(2);
    pq.push(3);
    pq.push(4);
    pq.emplace(5);

    cout<<pq.top()<< endl;
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
// Minimum heap
priority_queue<int, vector<int>, greater<int>> pq_m;
    pq_m.push(1);
    pq_m.push(2);
    pq_m.push(3);
    pq_m.push(4);
    pq_m.emplace(5);

    cout<<pq_m.top()<< endl;
    while(!pq_m.empty()){
        cout<<pq_m.top()<<" ";
        pq_m.pop();
    }

}