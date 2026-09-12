#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();
    unordered_map<int, int> mp;

    for(int i=0;i<n;++i){
        int rem = target - nums[i];
        if(mp.find(rem)!=mp.end()){
            return {mp[rem],i};
        }
        mp[nums[i]] = i;
    }

    return {0,0};
}

int main(){
    vector<int> nums = {2,7,11,15};
    int target = 9;
    cout<<twoSum(nums,target)[0]<<" "<<twoSum(nums,target)[1];
    return 0;
}