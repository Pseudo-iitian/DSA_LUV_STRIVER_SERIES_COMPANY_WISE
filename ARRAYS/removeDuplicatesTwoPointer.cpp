#include<bits/stdc++.h>
using namespace std;

void removeDuplicates(vector<int> &arr){
    int n= arr.size();
    if(n<=1) return;
    int i=0;
    int j = i+1;
    while(j<n){
        if(arr[i]!=arr[j]){
            arr[++i] = arr[j];
        }
        else j++;
    }

    // tc - O(n)
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // selection sort
    vector<int> arr = {1,1,2,2,3,3,4,5,5};
    removeDuplicates(arr);
    for(auto &val: arr){
        cout<<val<<" ";
    }
}