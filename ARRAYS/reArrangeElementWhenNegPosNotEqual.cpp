#include<bits/stdc++.h>
using namespace std;

void reArrange(vector<int> &nums){
    int sz = nums.size();
    vector<int> pos,neg;
    for(int i=0;i<sz;++i){
        if(nums[i]>0) pos.push_back(nums[i]);
        else neg.push_back(nums[i]);
    }
    int p = 0, n = 0;
    for(int i=0;i<sz;++i){
        if(p<pos.size())
            nums[i*2] = pos[p++];
        if(n<neg.size())
            nums[i*2+1] = neg[n++];
    }
    int i = min(pos.size(),neg.size()) * 2;
    
    if(p<pos.size()){
        while(p<pos.size()){
            nums[i++] = pos[p++];
        }
    }
    else{
        while(n<neg.size()){
            nums[i++] = neg[n++];
        }
    }
}


void reArrangeSigns(vector<int> &nums){
    int sz = nums.size();
    vector<int> pos,neg;
    for(int i=0;i<sz;++i){
        if(nums[i]>0) pos.push_back(nums[i]);
        else neg.push_back(nums[i]);
    }
    int equalSz = min(pos.size(),neg.size());
    for(int i=0;i<equalSz;++i){
        nums[i*2] = pos[i];
        nums[i*2+1] = neg[i];
    }
    if(pos.size()>neg.size()){
        int p = equalSz;
        int idx = equalSz*2;
        while(p<pos.size()){
            nums[idx++] = pos[p++];
        }
    }
    else{
        int n = equalSz;
        int idx = equalSz*2;
        while(n<neg.size()){
            nums[idx++] = pos[n++];
        }
    }
}


int main() {

    vector<int> arr = {-1,2,3,4,-4,1};
    reArrange(arr);
    for(auto &val: arr){
        cout<<val<<" ";
    }
    return 0;
}
