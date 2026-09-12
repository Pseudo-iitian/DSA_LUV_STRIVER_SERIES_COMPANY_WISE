#include<bits/stdc++.h>
using namespace std;

int longestSubarraywithsumk(vector<long long > &arr, int k){
    // its is for all type of numbers positive and negative and 0 
    int n = arr.size();
    int maxi = 0;
    long long sum = 0;
    unordered_map<long long int,int> mp;
    for(int i=0;i<n;++i){
        sum += arr[i];
        if(sum == k ){
            maxi = max(maxi,i+1);
        }
        long long rem  = sum - k;
        if(mp.find(rem)!=mp.end()){
            int len = i - mp[rem];
            maxi = max(maxi,len);
        }
        if(mp.find(sum) == mp.end())
            mp[sum] = i; // in case like 2 0 0 0 3 and k- 3 then we need to store the first index of sum 2 and not the last index of sum 2
    }
    return maxi;
}

int longestSubarraywithsumk2(vector<int> &arr, int k){
    // its only for the poisitve and 0 
    int n = arr.size();
    int maxi = 0;
    long long sum = arr[0];
    int left = 0;
    int right = 0;

    while(right<n){

        while(sum>k && left<=right){
            sum = sum - arr[left];
            left++;
        }

        if(sum==k){
            maxi = max(maxi,right-left +1);
        }

        right++;
        if(right<n) sum += arr[right];  
    }

    // O(2n) time complexity and O(1) space complexity

    return maxi;
}

int main(){
    vector<long long> arr = {1,2,3,1,1,1,1,4,2,3};
    int k = 3;
    cout<<longestSubarraywithsumk(arr,k);

    return 0;
}