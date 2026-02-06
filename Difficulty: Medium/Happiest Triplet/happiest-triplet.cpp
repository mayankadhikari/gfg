class Solution {
  public:
    vector<int> smallestDiff(vector<int>& a, vector<int>& b, vector<int>& c) {
        // code here.
        int n=a.size();
        sort(begin(a),end(a));
        sort(begin(b),end(b));
        sort(begin(c),end(c));
        
        vector<int> res;
        int diff=INT_MAX;
        int sum=INT_MAX;
        int i=0,j=0,k=0;
        
        while(i<n && j<n && k<n){
            int x=a[i];
            int y=b[j];
            int z=c[k];
            
            int maxi=max({x,y,z});
            int mini=min({x,y,z});
            
            int d=maxi-mini;
            int s=x+y+z;
            
            if(d<diff){
                res={x,y,z};
                diff=d;
                sum=s;
            }
            if(d==diff){
                if(s<sum){
                    sum=s;
                    res={x,y,z};
                }
            }
            if(mini==x) i++;
            else if(mini==y) j++;
            else k++;
        }
        sort(rbegin(res),rend(res));
        return res;
    }
};