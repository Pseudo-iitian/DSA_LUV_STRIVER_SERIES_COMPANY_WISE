#include<bits/stdc++.h>
using namespace std;

long subarrayXor(vector<int> &arr, int k) {
    // code here
    int n = arr.size();
    unordered_map<long,long> mp;
    mp[0]=1;
    long count = 0;
    long xr = 0;
    for(int i=0;i<n;++i){
        xr = xr ^ arr[i];
        long remXr = xr ^ k;
        if(mp.find(remXr)!=mp.end()){
            count+= mp[remXr];
        }
        mp[xr]++;
    }
    return count;
    // tc - O(n)
    // sc - O(n)
}

int main(){
    vector<int> nums = {4,2,2,6,4};
    int k = 6;
    cout<<subarrayXor(nums,k);
    return 0;
}