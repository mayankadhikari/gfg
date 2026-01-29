class Solution {
  public:
    void rearrangeQueue(queue<int> &q) {
        // code here
        queue<int> res;
        int n=q.size()/2;
        for(int i=0;i<n;i++){
            int front=q.front();
            res.push(front);
            q.pop();
        }
        while(!res.empty()){
            int num1=res.front();
            q.push(num1);
            res.pop();
            
            int nums2=q.front();
            q.push(nums2);
            q.pop();
        }
    }
};