#include<bits/stdc++.h>
using namespace std;

void leftRotateAnArrayByKPlaces(vector<int> &arr,int k){
    int n = arr.size();
    vector<int> temp;

    for(int i=0;i<k;++i){
        temp.emplace_back(arr[i]);
    }
    for(int i=k;i<n;++i){
        arr[i-k] = arr[i];
    }
    for(int i=n-k;i<n;++i){
        arr[i] = temp[i-(n-k)];
    }

    // tc - O(n+d)
    // sc - O(d)
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // selection sort
    vector<int> arr = {1,2,3,4,5};
    leftRotateAnArrayByKPlaces(arr,2);
    for(auto &val: arr){
        cout<<val<<" ";
    }
}