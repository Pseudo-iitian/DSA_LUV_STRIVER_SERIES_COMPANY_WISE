#include<bits/stdc++.h>
using namespace std;


int factorial(int n){
    if(n==0) return 1;
    return n * factorial(n-1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n = 3;
    cout<<factorial(n);
}

