Node *findMiddle(Node *head) {
    // Write your code here
    {
        if(head == NULL || head->next==NULL) return head;
      
        
        Node*slow = head;
        Node*fast=head;
       
        while(fast!=NULL && fast->next!=NULL)
        {
            fast=fast->next->next;
            slow = slow->next;
           
        }
         return slow;
    }
}
