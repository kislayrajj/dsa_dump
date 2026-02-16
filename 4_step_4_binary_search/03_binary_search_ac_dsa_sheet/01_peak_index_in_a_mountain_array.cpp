#include<bits/stdc++.h>
using namespace std;

int peakIndex(vector<int> &arr);

int main(){
    // vector<int> arr = {0,1,0};
    // vector<int> arr = {0,2,1,0};
    // vector<int> arr = {0,10,5,0};
    // vector<int> arr = {1,3,4,6,7,8,20,100};
    // vector<int> arr = {1, 3, 5, 4, 2};
    vector<int> arr = {1, 2, 3, 4, 5, 3, 1};
    int result = peakIndex(arr);
    cout<<result<<endl;

    return 0;
}


int peakIndex(vector<int> &arr){
    int low =0, high = arr.size()-1;

    while(low<=high){
        int mid = low + (high - low)/2;

        if(arr[mid]<arr[mid+1]){
            low = mid +1;
        }else{
            high = mid -1;
        }
    }

    return low;
}