#include<bits/stdc++.h>
using namespace std;

int longestSubarraywithsumk(vector<int> &arr, int k){
    int n = arr.size();
    int maxi = 0;
    for(int i=0;i<n;++i){
        int sum = 0;
        for(int j=i;j<n;++j){
            sum+= arr[j];
            if(sum==k){
                maxi = max(maxi,j-i+1);
            }
            else if(sum>k) break;
        }
    }

    return maxi;
}

//  i will generate all the sub array and whose sum is k i will take max of that subarray length and finally return it

int main(){
    vector<int> arr = {1,2,3,1,1,1,1,4,2,3};
    int k = 3;
    cout << longestSubarraywithsumk(arr,k) << endl;
    return 0;
}