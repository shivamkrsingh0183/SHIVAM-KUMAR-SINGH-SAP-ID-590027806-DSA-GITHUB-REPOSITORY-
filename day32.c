#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *push(struct node *head){
    if(head!=NULL){
        printf("stack is not empty\n");
    }



        struct node *temp;
        int value;
        printf("enter the value in the stack\n");
        scanf("%d",&value);
        
        struct node *newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=value;
        newnode->next=head;
        head=newnode;
        return head;
    }

    struct node *pop(struct node  *head){
        if(head==NULL){
            printf("stack is already empty\n");
            return ;
        }
        else{
            struct node *temp=head;
            printf("deleted element from the stack is:%d\n",temp->data);
            head=head->next;
            free(temp);
        return head;

        }
    }


void display(struct node *head){
    struct node *temp=head;


    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->next;
    }

}



int main(){
    struct node *head=NULL;
    int choice;
    do{
        printf("enter your choice\n");
        printf("1:push\n");
        printf("2:pop\n");

        printf("3:display\n");
        printf("4:exit\n");

        scanf("%d",&choice);
        switch(choice){
            case 1:{head=push(head);}break;
            case 2:{head=pop(head);}break;
            case 3:display(head);break;

            case 4:printf("exit\n");break;
        }
    }while(choice!=4);
    return 0;
}
