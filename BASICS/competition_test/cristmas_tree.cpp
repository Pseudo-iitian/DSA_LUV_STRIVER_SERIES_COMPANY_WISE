#include <bits/stdc++.h>
using namespace std;

void printNRowIn_nCr(int n){
    for(int i=0;i<n;++i){
        long long val = 1;
        for(int j=0;j<=i;++j){  
            cout<<val<<" ";
            val = val * (i-j) / (j+1);
        }
        cout<<endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        printNRowIn_nCr(n);
    }
    return 0;
    
}


