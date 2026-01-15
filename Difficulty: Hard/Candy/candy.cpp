class Solution {
  public:
    int minCandy(vector<int> &arr) {
        // code here
        int total=0;
        vector<int> res(arr.size(),1);
        for(int i=1;i<arr.size();i++){
            if(arr[i]>arr[i-1]) res[i]=res[i-1]+1;
        }
        for(int i=arr.size()-2;i>=0;i--){
            if(arr[i]>arr[i+1]) res[i]=max(res[i],res[i+1]+1);
        }
        for(auto i:res) total+=i;
        return total;
    }
};
