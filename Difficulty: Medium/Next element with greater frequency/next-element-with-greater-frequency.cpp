class Solution {
  public:
    vector<int> nextFreqGreater(vector<int>& arr) {
        // code here
        unordered_map<int,int> mp;
        int n=arr.size();
        vector<int> res(n,-1);
        for(int i:arr) mp[i]++;
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && mp[st.top()]<=mp[arr[i]]) st.pop();
            if(st.empty()) res[i]=-1;
            else res[i]=st.top();
            st.push(arr[i]);
        }
        return res;
    }
};
