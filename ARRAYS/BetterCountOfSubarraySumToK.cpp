#include<bits/stdc++.h>
using namespace std;

int countSubarraySumK(vector<int> &arr, int k){
    int n = arr.size();
    int maxi = 0;
    long long sum = 0;
    int count = 0;
    for(int i=0;i<n;++i){
        int sum = 0;
        for(int j=i;j<n;++j){
            sum+=arr[j];
            if(sum==k){
                count++;
            }
        }
    }
    return count;
    // tc - O(N^2)
}

int countSubarraySumK(vector<int> &arr, int k){
    int n = arr.size();
    int count = 0;
    int sum = 0;
    unordered_map<int,int> mp;
    mp[0] = 1; // very important to add for dealing with numbers which are postive negative and 0
    for(int i=0;i<n;++i){
        sum+= arr[i];
        int rem = sum - k;
        count+= mp[rem];
        mp[sum] += 1;
    }
    return count;

    // tc - O(N * log n) or O(N) depending on the implementation of unordered_map
    // sc - O(N)
}


int main(){

    return 0;
}