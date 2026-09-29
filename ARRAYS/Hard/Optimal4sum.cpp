#include<bits/stdc++.h>
using namespace std;


vector<vector<int>> fourSum(vector<int>& nums, int target) {
    int n = nums.size();
    sort(nums.begin(),nums.end());
    vector<vector<int>> res;
    for(int i=0;i<n;++i){
        if(i>0 && nums[i]==nums[i-1]) continue;
        for(int j=i+1;j<n;++j){
            if(j>i+1 && nums[j]==nums[j-1]) continue;
            int k = j+1;
            int l = n-1;
            while(k<l){
                long long sum = (long long) nums[i] + (long long) nums[j];
                sum += (long long) nums[k] + (long long) nums[l];
                if(sum<target){
                    k++;
                }
                else if(sum>target){
                    l--;
                }
                else{
                    res.push_back({nums[i],nums[j],nums[k],nums[l]});
                    k++;l--;
                    while(k<l && nums[k]==nums[k-1]) k++;
                    while(k<l && nums[l]==nums[l+1]) l--;
                }
            }
        }
    }
    return res;

    // tc - O(n^3)
    // sc - O(1)
}

int main(){
    vector<int> nums = {1,0,-1,0,-2,2};
    int k = 0;
    vector<vector<int>> res = fourSum(nums,k);
    for(int i=0;i<res.size();++i){
        for(int j=0;j<4;++j){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}