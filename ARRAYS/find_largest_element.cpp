#include<bits/stdc++.h>
using namespace std;

int find_largest_element(vector<int> &arr){
    int n = arr.size();
    int mxElement = INT_MIN;
    for(int i=0;i<n;++i){
        if(arr[i]>mxElement){
            mxElement = arr[i];
        }
    }
    return mxElement;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // selection sort
    vector<int> arr = {4,1,2,3,5};
    cout<<find_largest_element(arr);

}

