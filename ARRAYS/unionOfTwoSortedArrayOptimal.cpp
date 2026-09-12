#include<bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <bitset>
#include <queue>
#include <stack>
using namespace std;

typedef unsigned long long ull;
typedef vector<long long int> vi;
typedef vector<string> vs;
typedef vector<vector<long long int>> vvi;
typedef vector<pair<long long int, long long int>> vpii;
typedef map<long long int, long long int> mii;
typedef set<long long int> si;
typedef set<pair<long long int,long long int>> spii;
typedef pair<int,int> pr;
typedef pair<double,double> prd;
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
typedef long long ll;
typedef long double lld;

const int M = 1e9+7;

// -----------------------------------------------------------------
#define int long long
#define endl "\n"; 
#define ub upper_bound
#define lb lower_bound
#define pb emplace_back
#define ppb pop_back
#define F first
#define S second
#define mp make_pair
#define reverse(v) reverse(v.begin(),v.end())
#define sort(v) sort(v.begin(),v.end())
#define sz(a) ((int)((a).size()))
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define printv(val,x) for(auto &val : x) 
#define printpr(p) cout<<p.first<<" "<<p.second;
#define mod 1000000007
#define mod1 998244353
#define pii 3.14159265358979323846
#define fr(n) for(int i=0; i<n; i++)
#define frr(n) for(int i=n-1;i>=0;i--)
#define for_se(st,n) for(int i = st; i < n; i++)
#define for_rsn(st,en) for(int i = st; i >= en; i--)
#define yes cout<<"YES"<<endl; 
#define no cout<<"NO"<<endl; 
#define printMin1 cout<<"-1"<<endl;
// -----------------------------------------------------------------

// taking vector of pair
template<typename T1, typename T2>
istream& operator>>(istream &istream, pair<T1,T2> &p) {return (istream>> p.first>>p.second);}
// taking vector of v(n);
template<typename T>
istream& operator>>(istream &istream, vector<T> &v){for (auto &it: v)cin>>it;return istream;}
template<typename T3>
ostream& operator<<(ostream &ostream, vector<T3> &v){for(auto &it: v) cout<<it<<" ";return ostream;}

bool isPrime(ll n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
bool isPowerOfTwo(int n){if(n==0)return false;return (ceil(log2(n)) == floor(log2(n)));}
bool isPerfectSquare(ll x){if (x >= 0) {ll sr = sqrt(x);return (sr * sr == x);}return false;}

int gcd (int a, int b) { return a ? gcd (b % a, a) : b; }
int lcm (int a, int b) {return (a*b) / gcd(a, b);}
int fact(int n){return (n==1 || n==0)?1:n*fact(n);}

char upper(char c ){return 'A' + (c-'a');}
char lower(char c){return 'a' + (c-'A');}
// int gcd(int a,int b){if(a==0){return b;}return gcd(b%a,a);}
// int lcm(int a,int b){return (a*b)/gcd(a,b);}
// int fact(int n){if(n==0) return 1;return n*fact(n-1);}
// int isPrime(int n){
//     for(int i=2;i<=sqrt(n);++i){
//         if(n%i==0) return false;
//     }
//     return true;
// }

void unionOfTwoSortedArray(vector<int> &arr1,vector<int> arr2){
    int n1 = arr1.size();
    int n2 = arr2.size();
    int i=0;
    int j = 0;
    vector<int> temp;
    while(i<n1 && j<n2){
        if(arr1[i]<=arr2[j]){
            if(temp.empty() || arr1[i]!=temp.back())
                temp.push_back(arr1[i]);
            i++;
        }
        else{
            if(temp.empty() || arr2[j]!=temp.back())
                temp.push_back(arr2[j]);
            j++;
        }
    }

    while(i<n1){
        if(temp.empty() || arr1[i]!=temp.back()){
            temp.push_back(arr1[i]);
            i++;
        }
    }

    while(j<n2){
        if(temp.empty() || arr2[j]!=temp.back()){
            temp.push_back(arr2[j]);
            j++;
        }
    }

    for(auto &val: temp){
        cout<<val<<" ";
    }
}

signed main() {

    fastio
    vector<int> arr1 = {1,0,2,3,2,0,0,1,2,5};
    vector<int> arr2 = {2,5,3,7,7,5,7};

    unionOfTwoSortedArray(arr1,arr2);

    return 0;
}
