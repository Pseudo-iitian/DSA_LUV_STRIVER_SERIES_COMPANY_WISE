#include<bits/stdc++.h>
using namespace std; 

void takeinput(){
    string s;
    getline(cin,s);
    string res = "";
    for(int i=0;i<s.size();++i){
        if(s[i]==' '){
            transform(res.begin(),res.end(),res.begin(),::toupper);
            cout<<res<<endl;
            res = "";
        }
        else{
            res = res + s[i];
        }
    }
    if(res!=""){
        transform(res.begin(),res.end(),res.begin(),::toupper);
        cout<<res<<endl;
    }
}

void infinite_loop(){
    while(true){
        string s;
        cin>>s;
        if(s.size()==0){
            break;
        }
        transform(s.begin(),s.end(),s.begin(),::toupper);
        cout<<s<<endl;
    }
}

void string_stream(){
    
    string s,t;
    getline(cin,s);

    stringstream X(s);

    while(getline(X,t,' ')){
        cout<<t<<endl;
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    takeinput(); // using for loop

    infinite_loop(); // using infinite loop to take value through spaces

    string_stream();


    return 0;

}

