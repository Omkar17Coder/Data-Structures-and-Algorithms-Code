/*
------------------------------------------------------------------------------------------------------------
  Here We  Have Implemented linked List from start with proper memory allocatio.

  Here the User define class Node has public data members value and a pointer of type Node.
  Here for simplicity assume that the pointer stores two memory address one of data type and other the memory 
  address of second node.and Susequently the continous,
  To end the node the pointer of the next node should be given a NULL

-------------------------------------------------------------------------------------------------------------
*/
#include<iostream>
using namespace std;
// Creating a User deined Node.
class Node {
  public:


  int value;
  Node *next;

};

void printList (Node * n) {

    // Create a temporary pointer to store the head
    // Because we should never lose the head of the linked list.
    
    Node *temp=n;
    while(temp!=NULL){
        cout<<(temp->value)<<" ";
        temp=temp->next;
       
  }

}
void DeleteNode(Node* d){
// To delete A node // Given the pointer of the adderess of the node to be deleted;
 // First Exchange Value.
 
 d->value=d->next->value;
 Node*temp=d->next;

 d->next=temp->next;
 delete temp;
 
}


int main(){

    Node *head;
    Node *second;
    Node *third;
    Node * fourth;
    // We use dynamical alloction because we are able to get the address of the next node.
    head=new Node; // Dynamically Allocate Space for the node.
    second =new Node;
    third=new Node;
    fourth =new Node;
    

    // Asign Values.

    head->value=15;
    head->next=second;
    
    second->value=45;
    second->next=third;

    third->value=60;
    third->next=fourth;

    fourth->value=100;
    fourth->next=NULL;

  cout<<"Before Delete: ";
  printList(head);
  DeleteNode(second);
     // Delete the second node.
    
  cout<<"After Delete :";
  printList(head); // Function to print the linked list.

    delete head; // Finally Clear the alocation of the node from the memory.
    delete second;
    delete third;
    delete fourth;
    return 0;
}

#include<iostream>
using namespace std;


int main() {
    int a=10;
    int b=10;
    for(int i=0;i<5;i++) {
        int k=10;
        // Solve
    }

    return 0;
}