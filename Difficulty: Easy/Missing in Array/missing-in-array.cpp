class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int n=arr.size()+1;
        int sum=0;
        for(int i=0;i<n-1;i++) sum+=arr[i];
        long long esum=(n*1LL*(n+1))/2;
        return esum-sum;
    }
};