#include<bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>>& mat) {
    int n = mat.size();
    vector<vector<int>> ans(n,vector<int>(n));
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            ans[j][n-1-i] = mat[i][j];
        }
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            mat[i][j] = ans[i][j];
        }
    }
    // brute force solution
    // tc  = O(n^2) and sc = O(n^2 )
}

void rotate(vector<vector<int>>& mat) {
    //better solution
    // O(n/2 * n/2)
    int n = mat.size();
    for(int i=0;i<n-1;++i){
        for(int j=i+1;j<n;++j){
            swap(mat[i][j],mat[j][i]);
        }
    }
    // O(n * n/2)
    for(int i=0;i<n;++i){
        reverse(mat[i].begin(),mat[i].end());
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<vector<int>> mat = {{1,2,3},{4,5,6},{7,8,9}};
    rotate(mat);
    for(int i=0;i<mat.size();++i){
        for(int j=0;j<mat[0].size();++j){
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }
}