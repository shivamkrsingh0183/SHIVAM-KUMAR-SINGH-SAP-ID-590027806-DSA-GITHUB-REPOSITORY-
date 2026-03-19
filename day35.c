#include<stdio.h>
#include<stdlib.h>

void enqueue(int queue[],int *rear,int *front,int n){
    
    if(*rear==n-1){
        printf("queue is overflow\n");
        return ;
    }
    else{
        if(*front==-1)*front=0;
        int value;



        printf("enter the value in the queue\n");
        scanf("%d",&value);
        (*rear)++;
        queue[*rear]=value;
    }
}
void dequeue(int queue[],int *rear,int  *front){
    if(*front==-1){



        printf("queue is underflow\n");
    }
     else if(*front==*rear){
        int temp=queue[*front];
        (*front)=(*rear)=-1;
        printf("deleted element is :%d\n",temp);

    }
    else{
        int temp=queue[*front];
        (*front)++;
        printf("deleted element from queue is:%d\n",temp);
    
    }
}



void display(int queue[],int rear,int front){
    if(front==-1){
        printf("queue is empty\n");
    }


    

    else{
        printf("the queue you created is:\n");
        for(int i=front;i<=rear;i++){
            printf("%d\n",queue[i]);
        }
    }
}
int main(){
    int n;
    printf("enter the maximum size of the queue you want :\n");
    scanf("%d",&n);
    int queue[n];

    int choice;
    int rear=-1;
    int front=-1;

    do{
        printf("enter your choice:\n");
        // printf("1:create\n");
        printf("1:enqueue\n");
        printf("2:dequeue\n");
        printf("3:display\n");
        printf("4: exit\n");
        scanf("%d",&choice);


        switch(choice){
            case 1:enqueue(queue,&rear,&front,n);break;
            case 2: dequeue(queue,&rear,&front);break;


            case 3:display(queue,rear,front);break;
            case 4:printf("exir\n");break;
        
        }
    }while(choice!=4);
    return 0;
   
}

