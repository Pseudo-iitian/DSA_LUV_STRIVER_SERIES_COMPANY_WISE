#include<bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& nums) {
    int n = nums.size();
    int left = 0;
    int mid = 0;
    int right = n - 1;
    while(mid<=right){
        if(nums[mid]==2){
            swap(nums[mid],nums[right]);
            right--;
        }
        else if(nums[mid]==0){
            swap(nums[mid],nums[left]);
            left++;
            mid++;
        }
        else{
            mid++;
        }
    }

    // tc - O(n) and sc - O(1)
    // 0 to low - 1 = 0s
    // low to mid - 1 = 1s
    // mid to high = unosorted
    // high + 1 to n - 1 = 2s
}

void sortColors2(vector<int>& nums) {
    int cnt1= 0;
    int cnt2 =0;
    int cnt0= 0;
    int n = nums.size();
    for(int i=0;i<n;++i){
        if(nums[i]==0) cnt0++;
        else if(nums[i]==1) cnt1++;
        else cnt2++;
    }
    // tc - O(n)

    for(int i=0;i<cnt0;++i){
        nums[i] = 0;}
    for(int i=cnt0;i<cnt0+cnt1;++i){
        nums[i] = 1;
    }
    for(int i=cnt0+cnt1;i<n;++i){
        nums[i] = 2;
    }
    // O(n) time complexity and O(1) space complexity
    // total tc O(2n) and O(1) space complexity
}

int main(){
    vector<int> nums = {2,0,2,1,1,0};
    sortColors(nums);
    return 0;
}