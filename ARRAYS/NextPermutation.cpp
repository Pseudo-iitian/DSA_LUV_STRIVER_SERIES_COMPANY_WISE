#include<bits/stdc++.h>
using namespace std;


vector<int> nextPermutation(vector<int> &nums){

    int n= nums.size();
    // {2,1,5,4,3,0,0}
    // 1- we have to find the break pont where the arr[i] < arr[i+1] from n-2 to 0 
    int idx = -1;
    for(int i=n-2;i>=0;--i){
        if(nums[i]<nums[i+1]){
            idx = i;
            break;
        }
    }
    // idx were never set
    if(idx==-1){
        reverse(nums.begin(),nums.end());
        return nums;
    }
    // {2,1,5,4,3,0,0}
    // 2- here we know the break is 1 at index 1
    // - find the greater than arr[idx] but smallest
    for(int i=n-1;i>=idx;--i){
        if(nums[i]>nums[idx]){
            swap(nums[i],nums[idx]);
            break;
        }
    }

    // 3- we have to from { 5,4,3,0,0} we have to make it sorted we can use reverse here
    reverse(nums.begin()+idx+1,nums.end());

    return nums;

    // O(3n) => O(n)
    // O(1) space extra space not used

}


int main() {

    vector<int> arr = {1,2,3};
    vector<int> copy = arr;
    vector<int> res = nextPermutation(arr);
    next_permutation(copy.begin(),copy.end());
    for(auto &val:copy){
        cout<<val<<" ";
    }
    cout<<endl;
    for(auto &val:res){
        cout<<val<<" ";
    }
    return 0;
}

