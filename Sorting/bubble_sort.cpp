#include<bits/stdc++.h>
using namespace std;


void bubble_sort(vector<int> &arr){
    int n = arr.size();
    for(int i=n-1;i>=1;--i){
        int didSwap = 0;
        for(int j =0;j<=i-1;++j){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                didSwap= 1;
            }
        }
        if(didSwap==0) break;
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // selection sort
    vector<int> arr = {4,1,2,3,5};
    bubble_sort(arr);

    for(int i=0;i<arr.size();++i){
        cout<<arr[i]<<" ";
    }

}


