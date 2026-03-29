#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;

};
struct node  *check(struct node *head,int value){
    struct node *curr=head;
    struct node *prev=NULL;

   
    while(curr!=NULL){
        if(curr->data==value){
            if(prev==NULL){
                head=curr->next; 
            }
            else{
                prev->next=curr->next;
            }
            free(curr);
            break;
        }
        prev=curr;
        curr=curr->next;
    
    }
    return head;
}



struct node *creation(struct node *head){
    int n;


    printf("enter the number of nodes you want in the linkedlist\n");
    scanf("%d",&n);
    struct node *temp;
    for(int i=0;i<n;i++){
        int value;
        printf("enter the value for the node:\n");
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

void display(struct node *head){
    struct node *temp=head;
    printf("linkedlist you created is:\n");
    while(temp!=NULL){
        printf("%d\n",temp->data);

        temp=temp->next;
    }
    return;
}


int main(){


    struct node *head=NULL;
    head=creation(head);
    display(head);
    int value;
    printf("enter the value which you want to delete\n");
    scanf("%d",&value);
    head=check(head,value);
    display(head);


    return 0;
}
