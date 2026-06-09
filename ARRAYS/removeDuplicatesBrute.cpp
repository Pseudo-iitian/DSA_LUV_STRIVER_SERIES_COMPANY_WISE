#include<bits/stdc++.h>
using namespace std;


void removeDuplicates(vector<int> &arr){
    int n= arr.size();
    set<int> st;
    for(auto &val: arr){ // it is for n 
        st.insert(val); // it takes logn
    }
    // tc - nlogn + n
    // sc - n 
    int i = 0;
    for(auto &val: st){
        arr[i++] = val;
    }
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