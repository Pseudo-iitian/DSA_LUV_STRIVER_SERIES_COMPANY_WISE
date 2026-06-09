#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    unordered_map<int,int> mp;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        cout<<"cout of : "<<number<<" is: "<<mp[number]<<endl;
    }

}