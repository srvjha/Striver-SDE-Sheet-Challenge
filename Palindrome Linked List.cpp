LinkedListNode<int>* reverseList(LinkedListNode<int>* head) {
         if(head==NULL || head->next==NULL) return head;
        
           LinkedListNode<int>* next = NULL;
           LinkedListNode<int>* prev = NULL;
            while(head!=NULL)
            {
                next=head->next;
                head->next=prev;
                prev=head;
                head=next;
            }
            return prev;
    }
    
bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
      if(head==NULL || head->next==NULL) return true;

        // Finding the middle element
       LinkedListNode<int>*slow = head;
       LinkedListNode<int>*fast=head;
       
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            slow = slow->next;
            fast=fast->next->next;
           
        }
        // Reversing the right half
        slow->next = reverseList(slow->next);

        // now after reversing my slow pointer should be at the start of right half
        // that means move slow to right half
        slow=slow->next;

        // Now comparing the left half and right half
        while(slow!=NULL)
        {
            if(head->data!=slow->data) return false;
            head = head->next;
            slow = slow->next;
        }
        return true;



}