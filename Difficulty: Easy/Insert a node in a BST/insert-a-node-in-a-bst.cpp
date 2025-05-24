// Function to insert a node in a BST.

/*
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    Node* insert(Node* node, int key) {

        // Your code goes here
        if(node ==nullptr) return new Node(key);
        if(key<node->data) node->left=insert(node->left,key);
        else if(key>node->data) node->right=insert(node->right,key);
        return node;
    }
};