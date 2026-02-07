class Solution {
  public:
    int maxSum(vector<int> &arr) {
        // code here
        int res=INT_MIN;
        int n=arr.size();
        int sum=0,t=0;
        for(int i=0;i<n;i++){
            t+=arr[i];
            sum+=i*arr[i];
        }
        res=max(res,sum);
        for(int i=n-1;i>=0;i--){
            sum+=t;
            sum-=arr[i]*(n);
            res=max(res,sum);
        }
        return res;
    }
};