class Solution {
  public:
    virtual bool isPossibleToMakeInKop(int m,int n,vector<int> &arr,int k,int w){
        vector<int> prefSum(n,0);
        int op=0;
        for(int i=0;i<n;i++){
            if(i>0) prefSum[i]+=prefSum[i-1];
            if((prefSum[i]+arr[i])<m){
                int curr=prefSum[i];
                op+=(m-(curr+arr[i]));
                prefSum[i]+=(m-(curr+arr[i]));
                if((i+w)<n) prefSum[i+w]-=(m-(curr+arr[i]));
            }
        }
        return op<=k;
    }
    virtual int maxMinHeight(vector<int> &arr, int k, int w) {
        // code here
        int ans=-1;
        int n=arr.size();
        int maxv=*max_element(arr.begin(),arr.end());
        int s=1,e=maxv+k;
        while(s<=e){
            int m=s+(e-s)/2;
            if(isPossibleToMakeInKop(m,n,arr,k,w)){
                ans=m;
                s=m+1;
            }
            else e=m-1;
        }
        return ans;
    }
    virtual~Solution(){}
};