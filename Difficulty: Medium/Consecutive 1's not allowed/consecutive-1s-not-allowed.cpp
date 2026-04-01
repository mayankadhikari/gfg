class Solution {
  public:
    int countStrings(int n) {
        // code here
        int first=2;
        if(n==1) return first;
        
        int sec=3;
        if(n==2) return sec;
        int next=0;
        for(int i=0;i<n-2;i++){
            next=first+sec;
            first=sec;
            sec=next;
        }
        return next;
    }
};