class Solution {
  public:
    bool check(int mid,vector<int> &arr,int k){
        int painter=1;
        int temp=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>mid) return false;
            if(temp+arr[i]<=mid) temp+=arr[i];
            else{
                painter++;
                temp=arr[i];
            }
        }
        return painter<=k;
    }
    int minTime(vector<int>& arr, int k) {
        // code here
        int low=*max_element(arr.begin(),arr.end());
        int high=accumulate(arr.begin(),arr.end(),0);
        int ans=high;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(check(mid,arr,k)){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};