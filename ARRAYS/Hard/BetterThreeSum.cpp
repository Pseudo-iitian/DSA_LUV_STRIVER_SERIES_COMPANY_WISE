#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    int n = nums.size();
    set<vector<int>> res;
    for(int i=0;i<n;++i){
        set<int> st;
        for(int j=i+1;j<n;++j){
            int third = -(nums[i]+nums[j]);
            if(st.find(third)!=st.end()){
                vector<int> temp = {nums[i],nums[j],third};
                sort(temp.begin(),temp.end());
                res.insert(temp);
            }
            st.insert(nums[j]);
        }
    }
    vector<vector<int>> ans(res.begin(),res.end());
    return ans;
}

int main(){
    vector<int> nums = {-1,0,1,2,-1,-4};
    vector<vector<int>> res = threeSum(nums);
    for(int i=0;i<res.size();++i){
        for(int j=0;j<3;++j){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}