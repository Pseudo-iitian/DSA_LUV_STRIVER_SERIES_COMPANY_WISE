#include<bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums) {
    // brute force
    int n = nums.size();
    for(int i=0;i<n;++i){
        int cnt = 0;
        for(int j = 0;j<n;++j){
            if(nums[j]==nums[i]){
                cnt++;
            }
        }
        if(cnt==1) return nums[i];
    }
    return 0;
    //tc - O(n^2)
    //sc - O(1)
}

int singleNumber(vector<int>& nums) {
    // better - it uses space hashing
    int n = nums.size();
    int maxi = nums[0];
    for(int i=0;i<n;++i) maxi = max(maxi,nums[i]);
    vector<int> hash(maxi+1,0);
    for(int i=0;i<n;++i){
        hash[nums[i]]+=1;
    }
    for(int i=0;i<=maxi;++i){
        if(hash[i]==1) return i;
    }
    return 0;
    //tc - O(n)
    //sc - O(n)
}

int singleNumber(vector<int>& nums) {
    // optimal - it uses xor
    int n = nums.size();
    int singleN = 0;
    for(int i=0;i<n;++i){
        singleN = singleN^nums[i];
    }
    return singleN;
    //tc - O(n)
    //sc - O(1)
}

int main(){

    return 0;
}