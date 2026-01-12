class Solution {
  public:
    vector<int> maxOfSubarrays(vector<int>& arr, int k) {
        // code here
        deque<int> dq;
        int i=0,j=0,n=arr.size();
        vector<int> ans;
        while(j<n){
            while(!dq.empty() && arr[dq.back()]<arr[j]) dq.pop_back();
            dq.push_back(j);
            if(j-i+1==k){
                ans.push_back(arr[dq.front()]);
                if(dq.front()==i) dq.pop_front();
                i++;
            }
            j++;
        }
        return ans;
    }
};