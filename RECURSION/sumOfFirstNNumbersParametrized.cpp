#include<bits/stdc++.h>
using namespace std;

// sum of first N natural number using parameterised recursion
void sumOfFirstNNum(int i,int sum){
    if(i<1){
        cout<<sum<<endl;
        return;
    }
    sumOfFirstNNum(i-1,sum+i);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n = 5;
    sumOfFirstNNum(n,0);
}