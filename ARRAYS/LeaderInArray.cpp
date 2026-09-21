#include<bits/stdc++.h>
using namespace std;


vector<int> leaderInArray(vector<int> &arr){
    int n = arr.size();
    int leader = INT_MIN;
    vector<int> ans;
    for(int i=n-1;i>=0;--i){
        if(arr[i]>leader){
            leader = arr[i];
            ans.insert(ans.begin(),leader);
        }

    }
    return ans;
    // O(n) time complexity
}


int main() {

    vector<int> arr = {10,22,12,3,0,6};
    vector<int> res = leaderInArray(arr);
    for(auto &val: res){
        cout<<val<<" ";
    }
    return 0;
}
