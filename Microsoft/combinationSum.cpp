#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void helper(int idx,int k,int sum,vector<vector<int>>&ans,vector<int>&ds){
        if(sum==0 and k==0) ans.push_back(ds);
        for(int i=idx;i<=9;i++){
            if(i>sum) return;
            ds.push_back(i);
            helper(i+1,k-1,sum-i,ans,ds);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>ds;
        helper(1,k,n,ans,ds);
        return ans;
    }
};

int main(){
    int k,n;
    cin>>k>>n;
    Solution obj;
    vector<vector<int>>ans={obj.combinationSum3( k, n)};
    for(int i=0;i<ans.size();i++){
        cout<<"[";
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ,";
        }
        cout<<"]";
        cout<<endl;
    }
    return 0;

}