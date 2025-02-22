#include<stdio.h>
#include<stdlib.h>
// Linked List implementation 
// steps 
// 1. define the node structure 
struct Node{
    int data;      //information 
    struct Node * next; //pointer to the next node 
};
//2. function to create a new node
struct Node * createNode(int value){
    struct Node * ptrNode=(struct Node *)malloc(sizeof(struct Node));
    ptrNode->data=value;
    ptrNode->next=NULL;
    return ptrNode;

}
//3. function to insert node at thr end of the list

 void insertNode(struct Node **ptrHead , int value)
 {
    struct Node *ptrNewNode=createNode(value);
    if (*ptrHead==NULL){
        *ptrHead=ptrNewNode;
        return;
    }
    
    struct Node  * ptrTemp =*ptrHead;
    while (ptrTemp->next!=NULL){
        ptrTemp=ptrTemp->next;
    }
    ptrTemp->next=ptrNewNode;
 }
// 4. Function to print the list 
void printList(struct Node *ptrHead){
    struct Node * ptr=ptrHead;
    while (ptr != NULL){
        printf("%d ->",ptr->data);
        ptr = ptr-> next;
    }
    printf("Null\n");
    
}
//6.Main function to test the linked list 
int main (){
    struct Node * head = NULL;
    insertNode(&head, 15);
    insertNode(&head, 105);
    printList(head);
    insertNode(&head, 150);

    insertNode(&head, 1005);
    insertNode(&head, 1005);
    printList(head);
    insertNode(&head, 1552);
    insertNode(&head, 152);
   
    
    printList(head);
}