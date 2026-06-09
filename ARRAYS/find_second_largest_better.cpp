#include<bits/stdc++.h>
using namespace std;

int secondLargestElement(vector<int> &arr){
    int n = arr.size();
    int largest = arr[0];
    int sLargest = INT_MIN; // in case of negative numbers
    for(auto &val: arr){
        if(val>largest){
            largest = val;
        }
    }

    for(int i=0;i<n;++i){
        if(arr[i]>sLargest && arr[i]!=largest){
            sLargest = arr[i];
        }
    }

    return sLargest;

    // tc = n + n = 2n = O(n)

}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // selection sort
    vector<int> arr = {1,7,7};
    cout<<secondLargestElement(arr);
    // cout<<digitSum(arr[1]);

}
