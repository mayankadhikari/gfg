class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
        long count=0;
        int x=0;
        unordered_map<int,int> mp;
        mp.reserve(arr.size());
        mp[0]=1;
        for(const int &it:arr){
            x^=it;
            count+=mp[x^k];
            mp[x]++;
        }
        return count;
    }
};