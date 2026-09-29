#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    int n = nums.size();
    set<vector<int>> st;
    for(int i=0;i<n;++i){
        for(int j=i+1;j<n;++j){
            unordered_set<long long> hashSet;
            for(int k=j+1;k<n;++k){
                long long sum = nums[i] + nums[j];
                sum += nums[k];
                long long fourth = target - sum;
                if(hashSet.find(fourth)!=hashSet.end()){
                    vector<int> temp = {nums[i],nums[j],nums[k],(int) fourth};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
                hashSet.insert(nums[k]);
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