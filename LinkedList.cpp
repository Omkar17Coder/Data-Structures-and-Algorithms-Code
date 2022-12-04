

Creating a method to define a linked list class and to solve any given problem
// Push This code to GitHub

#include<stdio>
#include<stdlib.h>

struct LinkedList{
    int data;
    struct LinkedList * next;
};
struct LinkedList * createNode(){ // Function would create new node
    struct LinkedList * temp;
    temp=(struct  LinkedList *)malloc(sizeof(struct LinkedList*));
    temp->next= NULL;
    return temp;
}

struct LinkedList * addNode(struct LinkdedList *head,int n){
    // used to add nodes add the end.
    // Code For creating new LinkedList.
    struct LinkedList*curr,p;
    p=head;
    curr=createNode();
    curr->data=n;
    if(head==NULL){
        head=curr;
        return  head;
    }
    else{
        while(p->next!=NULL){
            p=p->next;
        }
        p->next=temp;
    }
return head;
}

void printList(struct LinkedList* head){
 
    struct LinkedList*temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
// Delete the lastnode.

void deleteEnd(struct LinkedList*head){
    struct LinkedList *node=head;
    while(node->next->next!=NULL){
        node=node->next;
    }
    struct LinkedList *toDelete=node->next;// Here extra space is not used
    // the data type just points to other similar data type that occurpies space.

    node->next=NULL;
    free(toDelete);

}


int main(){

    struct LinkedList head=NULL;//Can be initialised to Null.
    int n;
    int value;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&value);
        head=addNode(head,value);
        // This always return new head after addition of new nodes into the linkedList
    

    }
    //  Create function To print the LinkedList.
    printList(head);
    deleteEnd(head);
// Always use this method to solve
// LinkedList Problems.








    return 0;
}


















