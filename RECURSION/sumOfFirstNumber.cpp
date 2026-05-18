#include<bits/stdc++.h>
using namespace std;

int sumOfFirstNNum(int i){
    if(i<1){
        return 0;
    }
    return i + sumOfFirstNNum(i-1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n = 5;
    cout<<sumOfFirstNNum(n);
}