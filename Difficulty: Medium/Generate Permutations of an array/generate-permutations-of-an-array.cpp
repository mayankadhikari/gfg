class Solution {
  public:
    void solve(vector<int>&arr,int n,int i,vector<vector<int>> &res){
        if(i==n){
            res.push_back(arr);
            return ;
        }
        for(int j=i;j<n;j++){
            swap(arr[i],arr[j]);
            solve(arr,n,i+1,res);
            swap(arr[i],arr[j]);
        }
    }
    vector<vector<int>> permuteDist(vector<int>& arr) {
        // code here
        vector<vector<int>> res;
        solve(arr,arr.size(),0,res);
        return res;
    }
};