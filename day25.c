#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node  *createlinkedlist(int n){
    struct node *head=NULL,*temp=NULL,*newnode=NULL;
    int value;
    for(int i=0;i<n;i++){
        printf("enter the value for the node in the linkedlist\n");

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
    return head;
}

void check(struct node *head,int target){
    struct node *temp=head;
    int count=0;
    while(temp!=NULL){
        if(temp->data==target){
            count++;
    }
     temp=temp->next;
}
    printf("the occurences of %d in the linkedlist is:%d\n",target,count);
}

int main(){


    struct node *head=NULL;
    int n;
    printf("enter the number of nodes you want to create\n");
    scanf("%d",&n);
    head=createlinkedlist(n);
    int target;
    printf("enter the number whose frequency you want to check\n");
    scanf("%d",&target);
    check(head,target);
    return 0;


}