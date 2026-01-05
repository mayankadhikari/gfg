class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int sum=accumulate(arr.begin(),arr.begin()+k,0);
        int msum=sum;
        for(int i=k;i<(int)arr.size();i++){
            sum+=arr[i]-arr[i-k];
            msum=max(msum,sum);
        }
        return msum;
    }
};