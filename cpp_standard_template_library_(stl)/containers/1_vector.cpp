#include <bits/stdc++.h>
using namespace std;

void explainVector();

int main()
{
    explainVector();
    return 0;
}

void explainVector()
{
    // vector<int> v ;
    // v.push_back(1);
    // v.emplace_back(2);
    // cout<<v[1]<<endl;

    // vector<pair<int, int>> vec;
    // vec.push_back({2,3});
    // vec.emplace_back(4,5);
    // cout<<vec[0].second;

    // vector<int> v(5, 200); // size: 5, 200,200 ...
    // cout << v[0] << endl;

    // vector<int> v3(5); // declared vector of size 5
    // vector<int> v1(4, 5);
    // vector<int> v2(v1);
    // cout << v2[0] << endl;

    // vector<int> v4 = {300, 301, 302};
    // vector<vector<int>> nested;
    // nested.push_back(v4); // Now nested = [ [300, 301, 302] ]
    // for (int x : nested[0])
    // {
    //     cout << x << " ";
    // }
    // cout << endl;

    // cout << nested[0][1] << endl;

    // iterator

    // vector<int> v = {300, 301, 302};
    // vector<int>::iterator it = v.begin();
    // // it++;
    // cout<<&(*it)<<" ";  // address of the element

    // vector<int> v = {300, 301, 302, 303, 304, 305, 306};
    // vector<int>::iterator it = v.begin();
    // it++;
    // cout << *(it) << " ";

    // it = it + 2;
    // cout << *(it) << endl;

    // vector<int>::iterator it2 = v.end();
    // // it2 -- ;
    // cout<< *it2<<" ";

    // vector<int>::reverse_iterator it3 = v.rend();
    // cout<<*it3<<" ";

    // vector<int>::reverse_iterator it4 = v.rbegin();
    // cout<<*it4<<" ";

    // cout<<v[0]<<" "<< v.at(0)<< endl;
    // cout<<v.back()<<" ";

    // loop
    // for (vector<int>::iterator it5 = v.begin(); it5 != v.end(); it5++)
    // {
    //     cout << *(it5) << " ";
    // }

    // for(auto it7 = v.begin(); it7 !=v.end(); it7++){
    //     cout<< *(it7)<<" ";
    // }

    // for(auto it6:v){
    //     cout<< it6<<" ";
    // }

    // deletion
    // v.erase(v.begin() + 1); // deletes second element

    // v.erase(v.begin()+2)

    // v.erase(v.begin() + 2, v.begin()+4);

    // for (auto it8 : v)
    // {
    //     cout << it8 << " ";
    // }

    vector<int> v = {300, 301, 302, 303, 304, 305, 306};
    // insert

    vector<int> v2(2, 100);
    // v2.insert(v2.begin() + 1, 300);
    // v2.insert(v2.begin() + 2, 5, 500);

    // vector<int> copy(4, 200);
    // v2.insert(v2.begin(), copy.begin(), copy.end());

    // cout << v2.size();
    v2.pop_back();

    // v.swap(v2);
    // v.clear();
   cout<< v.empty();
    // for (auto it9 : v)
    // {
    //     cout << it9 << " ";
    // }
}