class Solution {
  public:
    string removeKdig(string &s, int k) {
        // code here
        stack<char> st;
        for(auto it:s){
            while(!st.empty() && st.top()>it && k>0){
                st.pop();
                k--;
            }
            st.push(it);
        }
        while(k>0){
            st.pop();
            k--;
        }
        string res="";
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        while(res.size()>1 && res.back()=='0') res.pop_back();
        reverse(res.begin(),res.end());
        return res.empty()?"0":res;
    }
};