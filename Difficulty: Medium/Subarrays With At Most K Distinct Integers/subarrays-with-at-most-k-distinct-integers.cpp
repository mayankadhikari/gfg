class Solution {
  public:
    int solve(vector<int> &arr,int k){
        int i=0,j=0;
        int ans=0;
        unordered_map<int,int> mp;
        int n=arr.size();
        while(j<n){
            mp[arr[j]]++;
            while(mp.size()>k){
                mp[arr[i]]--;
                if(mp[arr[i]]==0) mp.erase(arr[i]);
                i++;
            }
            ans+=j-i+1;
            j++;
        }
        return ans;
    }
    int countAtMostK(vector<int> &arr, int k) {
        // code here
        return solve(arr,k);
    }
};