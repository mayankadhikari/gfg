class Solution {
  public:
    int maxProfit(vector<int> &prices) {
        // code here
        int n=prices.size();
        int res=0;
        int maxi=0;
        for(int i=n-1;i>=0;i--){
            if(prices[i]>maxi) maxi=prices[i];
            else res=max(res,maxi-prices[i]);
        }
        return res;
    }
};
