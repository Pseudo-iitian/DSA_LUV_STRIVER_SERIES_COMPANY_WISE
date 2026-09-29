#include<bits/stdc++.h>
using namespace std;

int countSubArrayXorToK(vector<int> & nums,int k){
    int n = nums.size();
    int count = 0;
    int xr = 0;
    for(int i=0;i<n;++i){
        xr = 0;
        for(int j=i;j<n;++j){
            xr = xr ^ nums[j];
            if(xr==k) count++;
        }
    }
    return count;
}

int main(){
    vector<int> nums = {4,2,2,6,4};
    int k = 6;
    cout<<countSubArrayXorToK(nums,k);
    return 0;
}