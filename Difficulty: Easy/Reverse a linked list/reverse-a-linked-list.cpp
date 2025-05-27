/* Linked List Node structure:

struct Node
{
    int data;
    struct Node *next;
}

*/

class Solution {
  public:
    Node* reverseList(struct Node* head) {
        // code here
        stack<Node*> s;
        Node* temp=head;
        while(temp->next!=NULL){
            s.push(temp);
            temp=temp->next;
        }
        head=temp;
        while(!s.empty()){
            temp->next=s.top();
            s.pop();
            temp=temp->next;
        }
        temp->next=NULL;
        return head;
    }
};