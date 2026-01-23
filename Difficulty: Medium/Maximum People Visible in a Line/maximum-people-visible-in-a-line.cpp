class Solution {
  public:
    int maxPeople(vector<int> &arr) {
        // code here
        int n=arr.size();
        int res=1;
        vector<int> maxArr;
        int maxi=arr[0];
        
        for(auto i:arr) maxi=max(maxi,i);
        maxArr.push_back(-1);
        
        for(int i=0;i<n;i++){
            if(arr[i]==maxi) maxArr.push_back(i);
        }
        maxArr.push_back(n);
        int m=maxArr.size();
        for(int i=1;i<m-1;i++){
            res=max(res,maxArr[i+1]-maxArr[i-1]-1);
        }
        return res;
    }
};