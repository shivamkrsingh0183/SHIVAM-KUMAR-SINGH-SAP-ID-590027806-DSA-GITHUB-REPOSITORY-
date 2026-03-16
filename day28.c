#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
int  main(){
    struct node *head=NULL;
    int n;
    printf("enter the number of nodes you want in the circular linkedlist\n");
    scanf("%d",&n);

struct node *temp=NULL;
    int value;
    for(int i=0;i<n;i++){
        struct node *newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter the value of the node:\n");
        scanf("%d",&value);
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
     
        temp->next=head;




    struct node *ptr=head;
printf("circular linkedlist is:\n");
   do{

    printf("%d\n",ptr->data);
    ptr=ptr->next;

   }while(ptr!=head);
    return 0;
}