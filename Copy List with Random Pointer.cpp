LinkedListNode<int> *cloneRandomList(LinkedListNode<int> *head)
{
    // Write your code here.
    unordered_map<LinkedListNode<int>*,LinkedListNode<int>*> hashMap;
    LinkedListNode<int>* temp = head;
//first iteration for inserting deep nodes of every node in the hashmap.
    while(temp != NULL) {    // Idhr hum val ko copy kr rhe hai
        LinkedListNode<int>* newNode = new LinkedListNode<int>(temp->data);
        hashMap[temp] = newNode;
        temp = temp->next;
    }
   LinkedListNode<int>* t = head;
//second iteration for linking next and random pointer as given question.
    while(t != NULL) {   // aur idhr hum next aur random pointer ke address ko copy kr rhe hai
        LinkedListNode<int>* node = hashMap[t];
        node->next = (t->next != NULL) ? hashMap[t->next]:NULL;
        node->random = (t->random != NULL) ? hashMap[t->random]:NULL;
        t = t->next;
    }
    return hashMap[head];
}
