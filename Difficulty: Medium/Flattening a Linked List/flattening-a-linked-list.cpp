/*
class Node {
public:
    int data;
    Node* next;
    Node* bottom;

    Node(int x) {
        data = x;
        next = NULL;
        bottom = NULL;
    }
};
*/

class Solution {
  public:
    Node *flatten(Node *root) {
        // code here
        if(!root || !root->next) return root;
        Node * ptr1=root->bottom, *ptr2=root->next;
        Node* prev=root;
        root->next=ptr2->next;
        while(ptr1 || ptr2){
            int val1=ptr1?ptr1->data:INT_MAX;
            int val2=ptr2?ptr2->data:INT_MAX;
            if(val1<val2){
                prev->bottom=ptr1;
                ptr1=ptr1->bottom;
            }
            else{
                prev->bottom=ptr2;
                ptr2=ptr2->bottom;
            }
            prev=prev->bottom;
        }
        return flatten(root);
    }
};