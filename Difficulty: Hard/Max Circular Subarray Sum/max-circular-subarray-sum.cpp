class Solution {
  public:
    int maxCircularSum(vector<int> &arr) {
        // code here
        int tSum=0;
        int currMaxSum=0,currMinSum=0;
        int maxSum=arr[0],minSum=arr[0];
        
        for(int i=0;i<arr.size();i++){
            currMaxSum=max(currMaxSum+arr[i],arr[i]);
            maxSum=max(maxSum,currMaxSum);
            currMinSum=min(currMinSum+arr[i],arr[i]);
            minSum=min(minSum,currMinSum);
            tSum+=arr[i];
        }
        int nSum=maxSum;
        int cSum=tSum-minSum;
        if(minSum==tSum) return nSum;
        return max(nSum,cSum);
    }
};