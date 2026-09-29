#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> ans;
    set<vector<int>> st;
    int n = nums.size();
    for(int i=0;i<n;++i){
        for(int j=i+1;j<n;++j){
            for(int k=j+1;k<n;++k){
                int sum = nums[i] + nums[j] + nums[k];
                if(sum == 0){
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[k]);
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
            }
        }
    }
    for(auto &val: st){
        ans.push_back(val);
    }
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