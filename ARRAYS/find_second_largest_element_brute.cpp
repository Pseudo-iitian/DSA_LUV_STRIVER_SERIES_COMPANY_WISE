#include<bits/stdc++.h>
using namespace std;

int secondLargestElement(vector<int> &arr){
    int n = arr.size();
    sort(arr.begin(),arr.end()); // nlogn
    int largest = arr[n-1];
    int i = n-2;
    while(i>=0 && arr[i--]==largest);
    return arr[i+1]==largest?-1:arr[i+1];

    // tc = nlogn + n
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // selection sort
    vector<int> arr = {7,7};
    cout<<secondLargestElement(arr);
    // cout<<digitSum(arr[1]);

}