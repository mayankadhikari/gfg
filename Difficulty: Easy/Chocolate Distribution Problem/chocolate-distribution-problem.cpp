class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        // code here
        sort(a.begin(),a.end());
        int res=INT_MAX;
        for(int i=0;i+m-1<a.size();i++) res=min(res,a[i+m-1]-a[i]);
        return res;
    }
};