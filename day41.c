#include<Stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;

};
void creation(struct node **front ,struct node **rear){
    int n;
    printf("enter thenumber of nodes you want to create in the linnkedlist\n");
    scanf("%d",&n);


    struct node *temp;
    for(int i=0;i<n;i++){
        int value;
        printf("enter value:\n");
        scanf("%d",&value);
        struct node *newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=value;
        newnode->next=NULL;




        if(*front==NULL){
        *front=newnode;
        *rear=newnode;
        }
        else{
            (*rear)->next=newnode;
            *rear=newnode;
        }
    }
    
}

void  enqueue(struct node **front,struct node **rear){
    int value;
    printf("enter the value you want enqueue in the linkedlist:\n");
    scanf("%d",&value);
    struct node *insertnode=(struct node*)malloc(sizeof(struct node));


    insertnode->data=value;
    insertnode->next=NULL;
    if(*front==NULL){
        *front=insertnode;

        *rear=insertnode; 
    }
    else{
    (*rear)->next=insertnode;
    insertnode->next=NULL;

    }
}




void dequeue(struct node **front,struct node **rear){



    if(*front==NULL){
        printf("queue is empty\n");
        return;
    }
    else{
        struct node *temp=*front;

       int value=temp->data;

        (*front)=(*front)->next;
        free(temp);
        if(*front==NULL){
            *rear=NULL;
        }


        printf("dequeued element from queue is:%d\n",value);
    }
}

void display(struct node *front,struct node *rear){
    if(front==NULL){
        printf("queue is empty\n");
        return;
    }


struct node *temp=front;
printf("queue you created is:\n");
while(temp!=NULL){
    printf("%d\n",temp->data);
    temp=temp->next;

}
}
int main(){
    struct node *rear=NULL;

    struct node *front=NULL;
    int choice;
    do{
        printf("enter your choice:\n");
        printf("1:creation\n");
        printf("2:enqueue\n");
        printf("3:dequeue\n");
        printf("4:display\n");


        printf("5:exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:creation(&front,&rear);break;
            case 2:enqueue(&front,&rear);break;
            case 3:dequeue(&front,&rear);break;
            case 4:display(front,rear);break;
            case 5:printf("exit\n");break;


            default:printf("please enter a valid choice\n");
        }
    }while(choice!=5);
return 0; 

}