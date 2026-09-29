#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    int n = nums.size();
    set<vector<int>> st;
    for(int i=0;i<n;++i){
        for(int j=i+1;j<n;++j){
            for(int k=j+1;k<n;++k){
                for(int l=k+1;l<n;++l){
                    int sum = nums[i] + nums[j] + nums[k] + nums[l];
                    if(sum==target){
                        vector<int> temp = {nums[i],nums[j],nums[k],nums[l]};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                    }
                }
            }
        }
    }
    vector<vector<int>> res(st.begin(),st.end());
    return res;
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