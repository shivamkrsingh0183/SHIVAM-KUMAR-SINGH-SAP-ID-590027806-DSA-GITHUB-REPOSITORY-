#include<stdio.h>


void creation(int deque[],int *front,int *rear,int size){
    int n;
    printf("enter the number of numbersss you want to input in the deque[]\n");
    scanf("%d",&n);
    if(n>size){
        printf("cannot enter more than the predefined size\n");
        return;
    }
    else if(*front==-1){
        *front=0;
        *rear=-1;
    }
    for(int i=0;i<n;i++){
        int value;
        printf("enter value:\n");
        scanf("%d",&value);
        (*rear)++;
    deque[*rear]=value;
    }
}
    
int full(int front,int rear,int size){
    return front==(rear+1)%size;
}
int empty(int front,int rear,int size){
     return front==-1;
}

void inser_at_front(int deque[],int *front,int *rear,int size){
    int value;
    printf("enter the value to insert in  front in the deque\n");
    scanf("%d",&value);
    if(full(*front,*rear,size)){
        printf("deque is overflow\n");
        return;
    }
    if(*front==-1){
        *front=0;
        *rear=0;
    }


    else if(*front==0){
        *front=size-1;
    }
    
    else{
        (*front)--;
    }

deque[*front]=value;   
}
void insert_at_end(int deque[],int *front,int *rear,int size){
    int value;
    printf("enter the value you want to inser at last\n");
    scanf("%d",&value);
    if(full(*front,*rear,size)){
        printf("deque is overflow\n");
        return;
    }
    if(*rear==-1){
        *front=0;
        *rear=0;
    }
    else if(*rear==size-1){
        *rear=(*rear+1)%size;
    }

    else{
        (*rear)++;
    }
    deque[*rear]=value;

}

void delete_at_front(int deque[],int *front,int *rear,int size){
    printf("deleted element is :%d\n",deque[*front]);
if(empty(*front,*rear,size)){
    printf("deque is empty\n");
    return;
}


    else if(*front==*rear){
        *front=-1;
        *rear=-1;  
    }
else if(*front==size-1){
    *front=0;
}
    else{
        (*front)++;
    }
   
}
void delete_at_end(int deque[],int *front,int *rear,int size){
    if(empty(*front,*rear,size)){

        printf("deque is empty\n");
        return;
    }
    else if(*front==*rear){
        *front=-1;
        *rear=-1;
    }
    else if(*rear==0){
        *rear=size-1;
    }
    else{


        (*rear)--;
    }
}

void display(int deque[],int front,int rear,int size){
    if(front==-1){
        printf("deque is underflown\n");
        return;
    }
    else{
        int i=front;
        while(1){
            printf("%d\n",deque[i]);
        if(i==rear){
            break;
        }
        i=(i+1)%size;
    }
}
}
int main(){
    int front=-1;
    int rear=-1;
    int size;
    printf("enter the  maximum size of the deque\n");
    scanf("%d",&size);

    int deque[size];
    int choice;
    do{
    printf("enter your choice:\n");

    printf("1:creation:\n");
    printf("2:insert_at_front:\n");
    printf("3:insert_at_end:\n");
    printf("4:delete_at_front:\n");
    printf("5:delete_at_end:\n");

    printf("6:display\n");
    printf("7:exit\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:creation(deque,&front,&rear,size);break;
        case 2:inser_at_front(deque,&front,&rear,size);break;
        case 3:insert_at_end(deque,&front,&rear,size);break;
        case 4:delete_at_front(deque,&front,&rear,size);break;
        case 5:delete_at_end(deque,&front,&rear,size);break;
        case 6:display(deque,front,rear,size);break;
        case 7:printf("exit\n");break;
        default:printf("enter a valid choice\n");
    }

}while(choice!=7);
return 0;
}