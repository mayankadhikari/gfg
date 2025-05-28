class Solution {
  public:
    // Function to check whether a Binary Tree is BST or not.
    bool isBSTUtil(Node* node,int min,int max){
        if(node==nullptr) return true;
        if(node->data<min || node->data>max) return false;
        return isBSTUtil(node->left,min,node->data-1) && isBSTUtil(node->right,node->data+1,max);
    }
    bool isBST(Node* root) {
        // Your code here
        return isBSTUtil(root,INT_MIN,INT_MAX);
    }
};