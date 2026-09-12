#include<bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int n = nums.size();
    int cnt = 0;
    int MaxCones = 0;
    for(int i=0;i<n;++i){
        if(nums[i]==1){
            cnt++;
            MaxCones = max(cnt,MaxCones);
        }
        else{
            cnt = 0;
        }
    }
    return MaxCones;
}

int main(){
    vector<int> nums = {1,1,0,1,1,1};
    cout<<findMaxConsecutiveOnes(nums)<<endl;
    return 0;
}