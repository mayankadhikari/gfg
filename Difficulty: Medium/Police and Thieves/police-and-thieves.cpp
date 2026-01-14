class Solution {
  public:
    int catchThieves(vector<char> &arr, int k) {
        // Code here
        deque<int> dq;
        queue<int> pol;
        int res=0;
        
        for(int i=0;i<arr.size();i++){
            if(arr[i]=='T'){
                while(pol.size() && (i-pol.front())>k) pol.pop();
                if(pol.size()){
                    res++;
                    pol.pop();
                }
                else dq.push_back(i);
            }
            if(arr[i]=='P'){
                if(!dq.size()) pol.push(i);
                while(dq.size() && (i-dq.front()>k)) dq.pop_front();
                if(dq.size()){
                    dq.pop_front();
                    res++;
                }
            }
        }
        return res;
    }
};