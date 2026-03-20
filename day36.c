#include<stdio.h>
#include<stdlib.h>


void push(int circular_linkedlist[],int *rear,int *front,int n ){
    if ((*rear+1)%n==*front){
    printf("stack is overflow\n");
    }

    else{
        if(*front==-1){
        *front=0;


        }
        int value;
        printf("enter value in the stack\n");
        scanf("%d",&value);
        *rear=(*rear+1)%n;
        circular_linkedlist[*rear]=value;
    }
    
}

void pop(int circular_linkedlist[],int *rear,int *front,int n){
    if(*front==-1){

        printf("circular linked list is already empty\n");
    }
    else{
        int temp=circular_linkedlist[*front];
       *front=(*front+1)%n;
       printf("deleted element is %d\n",temp);
    
}
}
void display(int circular_linkedlist[], int front, int rear, int n){
    if(front == -1){
        printf("Queue is empty\n");
        return;
    }

    printf("Queue elements:\n");

    int i = front;
    while(1){
        printf("%d\n", circular_linkedlist[i]);
        if(i == rear)
            break;
        i = (i + 1) % n;

    }
}
int main(){
    int rear=-1;
    int front=-1;
    int n;
    printf("enter the maximum number of elements y ou want in the circular array\n");
    scanf("%d",&n);
    int circular_linkedlist[n];
    int choice;
    do{
        printf("enter your choice\n");

        printf("1:push\n");
        printf("2:pop\n");
        printf("3:display\n");
        printf("4:exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:push(circular_linkedlist,&rear,&front,n);break;
            case 2:pop(circular_linkedlist,&rear,&front,n);break;


            case 3:display(circular_linkedlist,front,rear,n);break;
            case 4:printf("exit\n");break;
        }
    }while(choice!=4);
return 0;
}