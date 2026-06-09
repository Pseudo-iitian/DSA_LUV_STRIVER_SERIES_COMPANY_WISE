#include<bits/stdc++.h>
using namespace std;

nt main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    string s;
    cin>>s;

    // hasing of chars
    vector<int> hash(256,0);

    for(int i=0;i<s.size();++i){
        int ch = s[i];
        hash[ch] += 1;
    }
    
    int t;
    cin>>t;
    while(t--){
        char c;
        cin>>c;
        cout<<hash[c]<<endl;

    }
}

