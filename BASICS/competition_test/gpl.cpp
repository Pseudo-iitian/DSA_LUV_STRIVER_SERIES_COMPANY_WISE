#include<bits/stdc++.h>
using namespace std;

long long giveInteger(string s,int n){
    long long val = 1ll;
    long long sum = 0;
    for(int i=n-1;i>=0;--i){
        if(s[i]=='1'){
            sum = sum + val;

        }
        val=val*2;
    }
    return sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        cout<<giveInteger(s,n)<<endl;
    }

    return 0;

}