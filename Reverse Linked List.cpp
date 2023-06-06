#include <bits/stdc++.h>

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here

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