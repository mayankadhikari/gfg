class Solution {
  public:
    int countSubarrays(vector<int> &arr) {
        // code here
        int res=0;
        int n=arr.size();
        vector<int> vec(n,n);
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[st.top()]>=arr[i]) st.pop();
            if(st.empty()) vec[i]=n;
            else vec[i]=st.top();
            st.push(i);
        }
        for(int i=0;i<n;i++) res+=(vec[i]-i);
        return res;
    }
};