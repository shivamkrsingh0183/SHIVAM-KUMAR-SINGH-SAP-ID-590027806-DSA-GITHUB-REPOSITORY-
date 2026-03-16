// QUESTION 1 Count Nodes in Linked List
#include<stdio.h>


#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int main(){
    struct node *head=NULL;
    struct node* temp=NULL;


    int n;
    scanf("%d",&n);
int value;
    for(int i=0;i<n;i++){
        printf("enter value for the node in the linkedlst\n");
        scanf("%d",&value);
        struct node *newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=value;



        newnode->next=NULL;
        if(head==NULL){
            head=newnode;
            temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
}
struct node *ptr=head;
int count=0;

while(ptr!=NULL){
    count++;
    ptr=ptr->next;
}
printf("number of nodes in th elinkedlist is:%d\n",count);
return 0;
}