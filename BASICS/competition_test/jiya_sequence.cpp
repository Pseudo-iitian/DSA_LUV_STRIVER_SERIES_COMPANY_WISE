#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        int mlt = 1;
        for(int i=0;i<n;++i){
            cin>>arr[i];
            mlt = mlt * arr[i];
        }
        if(mlt%10==2 || mlt%10==3 || mlt%10==5){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}
