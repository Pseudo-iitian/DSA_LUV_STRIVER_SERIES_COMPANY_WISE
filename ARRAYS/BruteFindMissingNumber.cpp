#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<=n;++i){
            int flag = 0;
            for(int j = 0;j<n;++j){
                if(nums[j]==i){
                    flag = 1;
                    break;
                }
            }
            if(flag==0) return i;
        }
        return 0;
    }

int main(){

    missingNumber({3,0,1});
    // tc = O(N^2 )
    //Sc = O(1)
    return 0;
}