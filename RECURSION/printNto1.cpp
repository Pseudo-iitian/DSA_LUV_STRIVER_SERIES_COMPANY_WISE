#include<bits/stdc++.h>
using namespace std;

void print1ToN(int n){
    if(n==0) return;
    cout<<n<<endl;
    print1ToN(n-1);

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n = 10;
    print1ToN(n);
}
