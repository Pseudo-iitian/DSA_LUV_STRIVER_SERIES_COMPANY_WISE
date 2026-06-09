#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    // do precomputation
    vector<int> hash(13,0);
    for(int i=0;i<n;++i){
        hash[arr[i]]++;
    }

    int t;
    cin>>t;

    while(t--){
        int number;
        cin>>number;


        cout<<number<<" appeared this much times : "<<hash[number]<<endl;

    }

    // tc - O(n)
    // sc - O(1)

    return 0;

}
