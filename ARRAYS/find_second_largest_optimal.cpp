#include<bits/stdc++.h>
using namespace std;

int secondSmallestElement(vector<int> &arr){
    int n  = arr.size();
    int smallest = INT_MAX;
    int sSmallest = INT_MAX;

    for(int i=0;i<n;++i){
        if(arr[i]<smallest){
            sSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i]!=smallest && arr[i]<sSmallest && arr[i]>smallest){
            // 7, 7, 4, 1,2 you get second smallest after smallest
            sSmallest = arr[i];
        }
    }
    return sSmallest;
}

int secondLargestElement(vector<int> &arr){
    int n = arr.size();
    int largest = INT_MIN;
    int sLargest = INT_MIN;

    for(int i=0;i<n;++i){
        if(arr[i]>largest){
            sLargest = largest;
            largest = arr[i];
        }
        else if(arr[i]!=largest && arr[i]>sLargest && arr[i]<largest){
            // 1, 2, 3, 7, 7 , 5 you get second largest after largest
            sLargest = arr[i];
        }
    }

    return sLargest;

    // tc - O(n)
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // selection sort
    vector<int> arr = {7,7,6,5,3,1,2};
    cout<<secondLargestElement(arr)<<endl;
    cout<<secondSmallestElement(arr)<<endl;
    // cout<<digitSum(arr[1]);

}
