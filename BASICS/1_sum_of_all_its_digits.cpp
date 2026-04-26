#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int num = n;
    int sum = 0;
    while(num){
        int r = num%10;
        sum = sum + r;
        num = num /10;
    }

    cout<<sum<<endl;

    return 0;
}