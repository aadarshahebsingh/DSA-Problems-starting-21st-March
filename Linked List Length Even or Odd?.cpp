int isLengthEvenOrOdd(struct Node* head)
{
     //Code here
     Node* curr=head;
     int len=0;
     while(curr){
         len++;
         curr=curr->next;
     }
     if(len%2)return 1;
     else return 0;
    
}
