#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *previous;
};

struct node *insert(int n){
    struct node *head=NULL;
    struct node *temp=NULL;


    struct node *newnode=NULL;
    int value;
    for(int i=0;i<n;i++){
        struct node *newnode=(struct node*)malloc(sizeof(struct node));
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
         newnode->previous=temp;
        
        }
    }
    return head;
}
void display(struct node *head){
    struct node *ptr=head;
    printf("linked list you created is:\n");
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;


    }
}

int main(){
    struct node *head=NULL;
int n;
printf("enter number of values you want in the double linkedlist\n");
scanf("%d",&n);
head=insert(n);
display(head);
return 0;
}