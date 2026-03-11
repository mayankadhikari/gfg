class Solution {
  public:
    int sumSubMins(vector<int> &arr) {
        // code here
        const int MOD=1e9+7;
        long long res=0;
        int n=arr.size();
        stack<int> st;
        st.push(-1);
        for(int i=0;i<n;i++){
            while(st.top()!=-1 && arr[i]<arr[st.top()]){
                int mid=st.top();
                st.pop();
                int left=mid-st.top();
                int right=i-mid;
                res=(res+1LL*arr[mid]*left*right)%MOD;
            }
            st.push(i);
        }
        while(st.top()!=-1){
            int mid=st.top();
            st.pop();
            int left=mid-st.top();
            int right=n-mid;
            res=(res+1LL*arr[mid]*left*right)%MOD;
        }
        return res;
    }
};