https://github.com/Pseudo-iitian/DSA_LUV_STRIVER_SERIES_COMPANY_WISE

1- Replace all HEADER FIlES with one SINGLE HEADER FILE in C++ | Coding Tips #shorts
- we can use #include<bits/stdc++.h> for including all header file at once.

2- C++ Basics for Competitive Programming - Part 1 | CP Course | EP 2
- cin ignore new line "\n" and spaces while taking input for a , b, c & so on.

3- Overflow, Precision Errors, Calculation Order | C++ Basics - Part 2 | CP Course | EP 3
- calculation generally happens in higher data types
- ex - 7/2 = 3 and 7/2.0 = 3.5 
- calculation precendence -> characters > int > long int > long long int > flat > double (increasing order)
- Operator Precedence -> / * % have same precendence ( left to right evaluation )
- rough range of int -> -10^9 to 10^9
- long int -> -10^12 to 10^12
- long long int -> -10^18 to 10^18
- fixed is used to remove 1e10 annotation to 100000000 real 10^10 value using 
    double a = 100000;
    double b = 100000;
    double res = a * b;
    cout<<fixed<<res;
- setprecision(0) is used to make 1000.0000 to 1000 only .
- although, we can store large data in double, but not accurately 
- try doing this
    double a = 100000;
    double b = 100000;
    double res = a * b;
    res = 1e24;
    cout<<fixed<<res;
- output - 999999999999999983222784.000000

4- Conditions, Loops, Jump Statements and Questions | C++ Basics - Part 3 | CP Course | EP 4
- here we can have any operations like printing in for loop
    // intitialization conditions and operations
    for(int i=1;i<=10;cout<<i++<<endl){

    }
- break and continue is termed as jump statements, it acts on the last for loop.

5- C++ Strings, Getline and Big Numbers for Competitive Programming | C++ Basics 4 | CP Course | EP 5
- we can use == to compare two strings
- using + , we can concatenate two strings
- getline reads a line untill \n, usually think with cursor ponting after 1 in case of 
1 here is the cursor will read \n so output will be like 
abhisek verma
hitesh 
ram

// line here blank line
abhishek verma
hitesh 

- for input like a, b and c , like above it will look. like jaha se cursor hoga, vha se input lena start ker deta hai.
- input cursor is after 1, getline will read \n which result in new blank line in the output.
- here, we can use cin.ignore() will ignore new line.
    int t;
    cin>>t;
    while(t--){
        string s;
        getline(cin,s);
        cout<<s<<endl;
    }

input 
3
abhishek verma
from kiet 
leranring dsa

ouput 

abhishek verma
from kiet 

- with the use of cin.ignore() 
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        cout<<s<<endl;
    }

output- 
abhishek verma
from kiet 
leranring dsa

6- lets start episode 6 tomorrow
Why YOU should use STRING PUSHBACK instead of STRING CONCATENATION ? #shorts
- s.push_back("sa") TC: O(1) it is better
- s = s + "a" TC: O(size of s) ( O(s.size()))

Arrays and Size Limits for Local & Global Arrays | C++ Basics 5 | CP Course | EP 6
- segmentation fault : when you are trying to access that index that is not allocated to your array 
- example : arr(10) and arr[11] = 1; segmentation fault
- a means single element and a[] means a ka collection and a[][] means a[] ka collection

const int N = 1e7;
int arr[N];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N = 1e5;
    int arr[N];

    return 0;

}

- globally, we can declare array of size 1e7
- locally, we can declare array of size 1e5 only.
- this is because, when you declare vairable inside main, it get stored in stack and stack has limited size.
- but when you declare the array outside the main function, then it get stored inside heap. and heap has large memory size.

7- Functions, C++ references and CONTEST ALERT Information | C++ Basics - 6 | CP Course | EP 7
- arrays are always passed by references.
- when you need to pass 2d array in function then u have to pass the value of 2nd array i.e. arr[][20]
- but generally we take input n, m from user and we can not do like 
func(int n, int m , int arr[][m]){}
- so to avoid this, we declare array globally like this
- int N = 1e5 + 10;
int arr[N]; now you can use without passing.

8- Pointers in Deep and Easiest Way | C/C++ | Competitive Programming Course | EP 8
- 8 bits = 1 byte
- now each byte denotes address not bits.
- int has 4 byte means 4 block of memory
- int *x = 4; here x pionter pointing to first byte of int x means it will store first byte of 4 byte int data type x address.
- bytes are added in pointer addition like for int 4 bytes are added
- in array int a[10] here a is the pointers or contains address of a[0]
- means a = & a[0] both are same.

9- 