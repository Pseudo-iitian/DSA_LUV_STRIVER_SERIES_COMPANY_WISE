#include<bits/stdc++.h>
using namespace std;

void selection_sort(vector<int> &arr){
    int n = arr.size();
    for(int i=0;i<n-1;++i){
        int mini = i;
        for(int j=i+1;j<n;++j){
            if(arr[j]<arr[mini]){
                mini = j;
            }
        }
        swap(arr[i],arr[mini]);
    }
}




int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // selection sort
    vector<int> arr = {4,1,2,3,5};
    selection_sort(arr);

    for(int i=0;i<arr.size();++i){
        cout<<arr[i]<<" ";
    }

}