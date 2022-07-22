/*Iterative Code*/
LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
   if(head==NULL || head->next==NULL){
       return head;
   }
    LinkedListNode<int> *prev=NULL;
    LinkedListNode<int> *curr=head;
    while(curr!=NULL){
        LinkedListNode<int> *forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        
    }
    return prev;
}
/*recursive code*/
void reverse(LinkedListNode<int>* &head, LinkedListNode<int>* &curr, LinkedListNode<int>* &prev){
    if(curr==NULL){
        head=prev;
        return;
    }
    LinkedListNode<int>* forward=curr->next;
    reverse(head,forward,curr);
    curr->next=prev;
    
}
LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
   
    LinkedListNode<int>* curr=head;
     LinkedListNode<int>* prev=NULL;
    reverse(head,curr,prev);
    return head;
  
}
