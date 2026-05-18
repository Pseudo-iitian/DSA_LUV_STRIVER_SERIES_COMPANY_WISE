#include<bits/stdc++.h>
using namespace std;

void print1ToN(int f,int n){
    if(f==n+1) return;
    cout<<f<<endl;
    print1ToN(f+1,n);

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n = 10;
    print1ToN(1,n);
}
