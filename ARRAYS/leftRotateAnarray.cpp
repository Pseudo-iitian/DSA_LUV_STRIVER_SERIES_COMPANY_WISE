#include<bits/stdc++.h>
using namespace std;

void leftRotateAnArray(vector<int> &arr){
    int n = arr.size();
    int temp = arr[0];

    int i = 1;
    while(i<n){
        arr[i-1] = arr[i];
        i++;
    }
    arr[n-1] = temp;
    // tc - O(n)
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // selection sort
    vector<int> arr = {1,2,3,4,5};
    leftRotateAnArray(arr);
    for(auto &val: arr){
        cout<<val<<" ";
    }
}