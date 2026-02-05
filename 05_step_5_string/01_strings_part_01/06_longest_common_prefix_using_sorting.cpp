#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string> &strs);

int main(){
    // vector<string> strs = {"ab", "a"};
      vector<string> strs = {"flower","flow","flight"};
    // vector<string> strs = {"dog","racecar","car"};
    string result = longestCommonPrefix(strs);
    cout<<result<<endl;

    return 0;
}

string longestCommonPrefix(vector<string> &strs){
    sort(strs.begin(), strs.end());

    string ans = "";

    for(int i = 0; i<strs[0].size(); i++){
        if(strs[0][i] != strs[strs.size()-1][i]){
            break;
        }else{
            ans.push_back(strs[0][i]);
        }
    }
    return ans;
}