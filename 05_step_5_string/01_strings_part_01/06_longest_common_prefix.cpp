#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string> &strs);

int main(){
    // vector<string> strs = {"flower","flow","flight"};
    // vector<string> strs = {"dog","racecar","car"};
    vector<string> strs = {"ab", "a"};
    string result = longestCommonPrefix(strs);
    cout<<result<<endl;

    return 0;
}

string longestCommonPrefix(vector<string> &strs){
    string ans = "";

    for(int i =0; i<strs[0].size(); i++){
        char ch = strs[0][i];
        bool isMatch = true;
        for(int j = 1; j<strs.size(); j++){
            if( strs[j].size()<=i  ||ch!=strs[j][i]){
                isMatch = false;
                break;
            }
        }

        if(isMatch ==false){
            break;
        }else{
            ans.push_back(ch);
        }
    }

    return ans;
    
}