#include<bits/stdc++.h>
using namespace std;

void prntNto1Backtrack(int f,int n){
    if(f==n+1) return;
    prntNto1Backtrack(f+1,n);
    cout<<f<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n = 10;
    prntNto1Backtrack(1,n);
}
