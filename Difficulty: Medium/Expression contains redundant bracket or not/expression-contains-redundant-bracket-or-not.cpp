class Solution {
  public:
    bool checkRedundancy(string &s) {
        // code here
        stack<char> st;
        for(char c:s){
            if(c!=')') st.push(c);
            else{
                int x=0;
                while(st.top()!='('){
                    st.pop();
                    x++;
                }
                st.pop();
                if(x<2) return 1;
            }
        }
        return 0;
    }
};
