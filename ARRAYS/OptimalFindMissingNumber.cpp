#include<bits/stdc++.h>
using namespace std;

// using sum
int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int sum = n*(n+1) / 2;
    int arraySum = 0;
    for(int i=0;i<n;++i){
        arraySum += nums[i];
    }
    return sum - arraySum;
}

// using xor
int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int xor1 = 0;
    int xor2 = 0;
    for(int i=0;i<n;++i){
        xor1 = xor1^nums[i];
        xor2 = xor2^(i+1);
    }
    return xor1^xor2;
}


int main(){


    return 0;
}