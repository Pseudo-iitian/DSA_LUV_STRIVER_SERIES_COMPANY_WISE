#include<bits/stdc++.h>
using namespace std;

void insertion_sort(vector<int> &arr){
    int n = arr.size();
    for(int i=0;i<n;++i){
        int j = i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // selection sort
    vector<int> arr = {4,1,2,3,5};
    insertion_sort(arr);

    for(int i=0;i<arr.size();++i){
        cout<<arr[i]<<" ";
    }

}