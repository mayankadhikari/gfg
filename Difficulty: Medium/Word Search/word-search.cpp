class Solution {
  public:
    bool find(vector<vector<char>> &mat,string word,int i,int j,int index){
        if(i>=mat.size()||j>=mat[0].size()||i<0||j<0||mat[i][j]!=word[index]) return false;
        if(index==word.length()-1) return true;
        char temp=mat[i][j];
        mat[i][j]='#';
        bool op1=find(mat,word,i,j-1,index+1);
        bool op2=find(mat,word,i,j+1,index+1);
        bool op3=find(mat,word,i-1,j,index+1);
        bool op4=find(mat,word,i+1,j,index+1);
        mat[i][j]=temp;
        return op1||op2||op3||op4;
    }
    bool isWordExist(vector<vector<char>> &mat, string &word) {
        // Code here
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==word[0] && find(mat,word,i,j,0)) return true;
            }
        }
        return false;
    }
};