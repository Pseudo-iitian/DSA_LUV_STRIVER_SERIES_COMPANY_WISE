#include <bits/stdc++.h>
using namespace std;

vector<int> generateNthRow(int row){
    vector<int> temp;
    long long ans = 1;
    temp.push_back(1);
    for(int col=1;col<row;++col){
        ans = ans * (row-col);
        ans = ans / col;
        temp.push_back(ans);
    }
    return temp;
}

int main() {

    // printing all 5 rows
    int N = 5;
    vector<vector<int>> ans;
    for(int i=1;i<=N;++i){
        ans.push_back(generateNthRow(i));
    }

    for(int i=0;i<ans.size();++i){
        for(int j=0;j<ans[i].size();++j){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
