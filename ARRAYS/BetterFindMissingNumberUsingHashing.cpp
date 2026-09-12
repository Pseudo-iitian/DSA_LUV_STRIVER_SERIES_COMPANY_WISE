#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {
    int n = nums.size();
    vector<int> hash(n+1,0);
    for(int i=0;i<n;++i){
        hash[nums[i]] =1;
    }
    for(int i=0;i<=n;++i){
        if(hash[i]==0) return i;
    }
    return 0;
}

int main(){

    missingNumber({3,0,1});
    // tc = O(N)
    //Sc = O(N)
    return 0;
}