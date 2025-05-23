/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

class Solution {
  public:
    // Function to remove duplicates from sorted linked list.
    Node* removeDuplicates(Node* head) {

        // code here
        Node *temp=head,*prev=head;
        while(temp!=NULL){
            if(temp->data!=prev->data){
                prev->next=temp;
                prev=temp;
            }
            temp=temp->next;
        }
        if(prev!=temp) prev->next=NULL;
        return head;
    }
};