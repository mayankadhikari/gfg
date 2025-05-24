class Solution {
  public:
    int subseqCount(string &txt, string &pat) {
        // code here
        int m=pat.length(),n=txt.length();
        if(m>n) return 0;
        vector<int> prev(m+1,0);
        vector<int> curr(m+1,0);
        prev[0]=1;
        for(int i=1;i<=n;i++){
            curr[0]=1;
            for(int j=1;j<=m;j++){
                if(txt[i-1]==pat[j-1]) curr[j]=(prev[j-1]+prev[j]);
                else curr[j]=prev[j];
            }
            prev=curr;
        }
        return prev[m];
    }
};