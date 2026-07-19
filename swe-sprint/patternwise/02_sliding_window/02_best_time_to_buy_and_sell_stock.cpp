// not actually a sliding window pattern problem.

#include<bits/stdc++.h>
using namespace std;

int maxProfit(const vector<int> &arr);

int main(){
    // vector<int> arr = {7,1,5,3,6,4};
    vector<int> arr = {3,2,6,5,0,3};

    cout<<maxProfit(arr);

    return 0;
}

// // brute-force solution
// int maxProfit(vector<int> &arr){
//     int n = arr.size();
//     int maxP =0;
    
//     for(int i = 0; i<n; i++){
//         for(int j = i+1; j<n; j++){
//             int currP = arr[j]-arr[i];
//             maxP = max(maxP, currP);
//         }
//     }

//     return maxP;
// }


// optimal solution

int maxProfit( const vector<int> &arr){
    int maxP = 0;
    int boughtAt = arr[0];

    for(int i = 1; i<arr.size(); i++){
        maxP = max(maxP, arr[i]-boughtAt);
        boughtAt= min(boughtAt,arr[i]);
    }

    return maxP;
}
