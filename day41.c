#include<stdio.h>
#include<stdlib.h>


struct node{
    int data;
    struct node  *rear;
    struct node *front;
    struct node *next;
};
struct node *creation(struct node **rear,struct node **front){
    int n;
    

    printf("enter the number of data you want in the queue\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int value;
        printf("enter the value on the queue\n");
        scanf("%d",&value);
        struct node *newnode=(struct node*)malloc(sizeof(struct node));




        newnode->data=value;
        newnode->next=NULL;
        if(*front==NULL && *rear==NULL){
           *front=newnode;
           *rear=newnode;
        }
        else{
            (*rear)->next=newnode;
            *rear=newnode;
        }
    }
             printf("queue creation is successfull\n");

 
    return *front;
    return *rear;
}

struct node *display(struct node *front,struct node *rear){
    if(front==NULL){
        printf("queue is empty\n");
    }

    else{
    


   struct node *temp=front;
   printf("queue you created is:\n");
   while(temp!=NULL){

    printf("%d\n",temp->data);
    temp=temp->next;
   }
    }
    return front;
    return rear;
}



struct node *delete(struct node **front,struct node **rear){
    if(*front==NULL&&*rear==NULL){
        printf("queue is empty\n");
    }
    else{
        struct node *temp=*front;
        *front=(*front)->next;

        free(temp);
         printf("deletion from queue is successfull\n");
    }
   
    return *front;
    return *rear;

}
int main(){
    struct node *rear=NULL;


    struct node *front=NULL;
    int choice;
    do{
        printf("enter your choice\n");
        printf("1:creation\n");
        printf("2:deletion\n");
        printf("3:display\n");


        printf("4:exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:creation(&rear,&front);break;
            case 2:delete(&front,&rear);break;
            case 3:display(front,rear);break;
            case 4:printf("exit\n");break;
            default:printf("please enter a valid choice\n");break;
        }
    }while(choice!=4);
    return 0;
}