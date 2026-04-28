#include<bits/stdc++.h>
using namespace std;

int main(){

    int a = 5;
    int *p_a = &a;
    cout<<"a: "<<a<<endl;
    cout<<"value a p_a: "<<*p_a<<endl;
    cout<<"P_a: "<<p_a<<endl;
    cout<<"address of a: "<<&a<<endl;

    int **p_p_a = &p_a;
    cout<<*p_a<<endl;
    cout<<**p_p_a<<endl;
    cout<<*p_p_a<<endl;

    **p_p_a= 10;
    cout<<*p_a<<endl;
    cout<<**p_p_a<<endl;
    cout<<*p_p_a<<endl;
    cout<<endl;

    // array here 
    int arr[10];
    arr[0] = 1;
    cout<<"arr: "<<arr<<endl;
    cout<<"value at *arr: "<<*arr<<endl;
    cout<<"&arr[0]: "<<&arr[0]<<endl;
    cout<<" arr + 1: "<<arr+1<<endl;
    cout<<"&a[1]: "<<&arr[1]<<endl;

    return 0;
}
