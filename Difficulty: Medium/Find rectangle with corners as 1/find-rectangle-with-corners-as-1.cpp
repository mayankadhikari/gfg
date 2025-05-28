class Solution {
  public:
    bool ValidCorner(vector<vector<int> >& mat) {
        // code here
        int rows=mat.size();
        if(rows==0) return false;
        int cols=mat[0].size();
        
        for(int i=0;i<rows;i++){
            for(int p=i+1;p<rows;p++){
                int count=0;
                for(int k=0;k<cols;k++){
                    if(mat[i][k]==1 && mat[p][k]==1) count++;
                }
                if(count>=2) return true;
            }
        }
        return false;
    }
};