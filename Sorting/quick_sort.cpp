#include<bits/stdc++.h>
using namespace std;


int partition(vector<int> &arr,int low,int high){
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i<j){
        while(i<=high-1 && arr[i]<=pivot){
            i++;
        }
        while(j>=low+1 && arr[j]>pivot){
            j--;
        }
        if(i<j) swap(arr[i],arr[j]);
    }
    // j will be at the last index of the smaller than pivot element
    swap(arr[j],arr[low]);
    return j;
}


void quick_sort(vector<int> &arr,int low,int high){
    if(low<high){
        int pIndex = partition(arr,low,high);
        quick_sort(arr,low,pIndex-1);
        quick_sort(arr,pIndex+1,high);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // selection sort
    vector<int> arr = {4,1,2,3,5};
    int low = 0;
    int high = arr.size() - 1;
    quick_sort(arr,low,high);

    for(int i=0;i<arr.size();++i){
        cout<<arr[i]<<" ";
    }

}