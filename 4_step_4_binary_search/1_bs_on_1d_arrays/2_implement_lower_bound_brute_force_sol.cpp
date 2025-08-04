#include <bits/stdc++.h>
using namespace std;

// brute force solution
int lowerBound(vector<int> &arr, int k);

int main()
{
    vector<int> arr = {3, 5, 5, 6, 6, 7, 12, 21, 33};
    int k = 34;
    int result = lowerBound(arr, k);
    cout << result << endl;
    return 0;
}

int lowerBound(vector<int> &arr, int k){
    int n = arr.size();

    for(int i =0; i<n; i++){
        if(arr[i]>=k){
            return i;
        }
    }
    return n;
}