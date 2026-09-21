#include<bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& mat) {
    int n = mat.size();
    int m = mat[0].size();
    int left = 0, right = m-1;
    int top = 0, bottom = n-1;
    vector<int> ans;

    while(left<=right && top<=bottom){
        for(int i=left;i<=right;++i){
            ans.push_back(mat[top][i]);
        }
        top++;
        for(int i=top;i<=bottom;++i){
            ans.push_back(mat[i][right]);
        }
        right--;
        if(top<=bottom){
            for(int i=right;i>=left;--i){
                ans.push_back(mat[bottom][i]);
            }
            bottom--;
        }
        if(left<=right){
            for(int i=bottom;i>=top;--i){
                ans.push_back(mat[i][left]);
            }
            left++;
        }
    }
    return ans;
    // tc - O(n*m) and sc - O(n*m)
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<vector<int>> mat = {{1,2,3},{4,5,6},{7,8,9}};
    vector<int> res = spiralOrder(mat);
    for(auto &val: res){
        cout<<val<<" ";
    }
    return 0;
}