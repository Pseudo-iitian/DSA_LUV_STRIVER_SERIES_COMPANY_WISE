#include <bits/stdc++.h>
using namespace std;

char upper(char c ){return 'A' + (c-'a');}
int gcd(int a,int b){if(a==0){return b;}return gcd(b%a,a);}
int lcm(int a,int b){return (a*b)/gcd(a,b);}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,c;
    cin>>a>>b>>c;
    set<int> arr;
    arr.insert(a);
    arr.insert(b);
    for(int i=2;i<=c;++i){
        arr.insert(a*i);
        arr.insert(b*i);
    }
    int cnt = 1;
    int cth = 0;
    for(auto &val: arr){
        if(cnt==c){
            cth = val;
            break;
        }
        cnt++;
    }

    int lcmAB = lcm(a,b);
    if(cth%lcmAB==0){
        for(int i=cth;i>=0;i-=lcmAB){
            cout<<i<<" ";
        }
    }
    else{
        // single kisi ka multiple hai
        int val = 0;
        if(cth%a==0) val = a;
        else val = b;
        for(int i=cth;i>=0;i-=val){
            cout<<i<<" ";
        }
    }
    return 0;

}