class Solution {
  public:
    int longestSubarray(vector<int> &arr, int k) {
        // Code here
        int n=arr.size(),count=0,res=0;
        map<int,int> mp;
        mp[0]=-1;
        for(int i=0;i<n;i++){
            int x=1;
            if(arr[i]<=k) x=-1;
            count+=x;
            if(mp.find(count)==mp.end()) mp[count]=i;
            if(count<=0){
                if(mp.find(count-1)!=mp.end()) res=max(res,i-mp[count-1]);
            }
            else if(count>0) res=max(res,i+1);
        }
        return res;
    }
};