#include<bits/stdc++.h>
using namespace std;


// given R and C, find the element at the Rth row and Cth column of pascal triangle
long long findNCR(int n,int r){
    long long ans = 1;
    for(int i=0;i<r;++i){
        ans = ans * (n-i);
        ans = ans / (i+1);
    }
    return ans;
    // tc - O(r) and sc - O(1)
}

// q2- print any given row of the pascal triangle

int main() {

    vector<int> arr = {102,4,100,1,3,2,5};
    int r = 5,c=3;
    cout<<findNCR(r-1,c-1);
    return 0;
}