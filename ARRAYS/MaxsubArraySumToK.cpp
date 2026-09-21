#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int n = nums.size();
    int mxSum = INT_MIN;
    for(int i=0;i<n;++i){
        int sum = 0;
        for(int j=i;j<n;++j){
            sum+= nums[j];
            mxSum = max(mxSum,sum);
        }
    }
    return mxSum;
    //tc - O(n^2)
    //sc - O(1)
}

//optimal solution
int maxSubArray(vector<int>& nums) {
    int n = nums.size();
    int mxSum = INT_MIN;
    int sum = 0;
    for(int i=0;i<n;++i){
        sum+=nums[i];
        mxSum= max(mxSum,sum);
        if(sum<0) sum = 0;
    }
    return mxSum;
    //tc - O(n)
    //sc - O(1)
}

int main() {

    vector<int> arr = {-2,-3,4,-1,-2,1,5,-3};
    int s = maxSubArray(arr);
    cout<<s<<endl;
    return 0;
}
