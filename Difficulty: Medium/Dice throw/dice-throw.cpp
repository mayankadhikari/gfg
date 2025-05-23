class Solution {
  public:
    int noOfWays(int m, int n, int x) {
        // code here
        vector<int> dp(x+1,0);
        dp[0]=1;
        for(int i=1;i<=n;i++){
            for(int j=x;j>=1;j--){
                dp[j]=0;
                for(int k=1;k<=m && j-k>=0;k++){
                    dp[j]+=dp[j-k];
                }
            }
            dp[0]=0;
        }
        return dp[x];
    }
};