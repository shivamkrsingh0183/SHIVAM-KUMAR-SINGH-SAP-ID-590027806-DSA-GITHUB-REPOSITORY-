#include<stdio.h>
#include<Stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *createlinkedlist(struct node *head,int n){
    struct node *temp;
    struct node *newnode;
    for(int i=0;i<n;i++){

        int value;
        printf("value:\n");
        scanf("%d",&value);
        newnode=(struct node*)malloc(sizeof(struct node));
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



void display(struct node *head,int *count){
if(head==NULL){
    printf("linkedlist is empty\n");
}
else{
    struct node *temp=head;
    (*count)++;
    printf("linkedlist  %d is:\n",*count);


    while(temp!=NULL){
        printf("%d\n",temp->data);

        temp=temp->next;
    }
}
}

void intersection(struct node *head,struct node *head1){
    struct node *temp=head;

    struct node *temp1=head1;
   for(struct node *i=temp;i!=NULL;i=i->next){
    for(struct node *j=temp1;j!=NULL;j=j->next){
        if(i->data==j->data){
            printf("intersection of two linkedlist is:%d\n",i->data);
        }
    }
   }


}

int main(){
    struct node *head=NULL;
    struct node *head1=NULL;

    int n;
int count=0;
    printf("enter  the number of linkedlist nodes  you want to create in the first linkedlist\n");
    scanf("%d",&n);

    head=createlinkedlist(head,n);

    int n1;
    printf("enter the number of linkedlist nodes you want in the second linkedlist\n");
    scanf("%d",&n1);


    head1=createlinkedlist(head1,n1);
    display(head,&count);
    display(head1,&count);
    intersection(head,head1);
    return 0;

}