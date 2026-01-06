class Solution {
  public:
    int maxSubarrayXOR(vector<int>& arr, int k) {
        // code here
        int aXor=arr[0];
        for(int i=1;i<k;i++) aXor^=arr[i];
        int currXor=aXor;
        for(int i=k;i<arr.size();i++){
            currXor^=arr[i];
            currXor^=arr[i-k];
            aXor=max(currXor,aXor);
        }
        return aXor;
    }
};