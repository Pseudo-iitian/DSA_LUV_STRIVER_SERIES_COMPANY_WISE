#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) {
    // brute force 
    int n = nums.size();
    for(int i=0;i<n;++i){
        int count = 0;
        for(int j = 0;j<n;++j){
            if(nums[j]==nums[i]){
                count++;
            }
        }
        if(count>n/2) return nums[i];
    }
    return -1;
    // tc - O(N^2)
    // sc - O(1)
}


int majorityElement2(vector<int>& nums) {
    // moon's vote algorithm
    int n = nums.size();
    int el = nums[0];
    int count = 1;
    for(int i =1;i<n;++i){
        if(count==0){
            el = nums[i];
        } 
        if(nums[i]==el){
            count++;
        }
        else{
            count--;
        }
    }
    return el;
}


int main(){
    vector<int> nums = {3,2,3};
    cout<<majorityElement2(nums);
    return 0;
}