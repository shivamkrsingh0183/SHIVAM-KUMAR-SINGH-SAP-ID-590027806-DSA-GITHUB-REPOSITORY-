#include<stdio.h>


void create(int array[],int *n,int size){
    int x;
    printf("enter the number of elements you want to insert in the priority queue first:\n");
    scanf("%d",&x);
    if(x>size){
        printf("cannot enter more element than the size of the array\n");
    }
    else{
        for(int i=0;i<x;i++){
            
            int value;
            printf("enter the value in the queue:\n");
            scanf("%d",&value);
            (*n)++;
            array[*n]=value;
        }
    }
}



void insert(int array[],int *n,int size){
    if(*n==size-1){
        printf("queue is overflow\n");
        return;
    }
    else{
        int value;
        printf("enter the value you want to inser in the array\n");
        scanf("%d",&value);
        (*n)++;
        array[*n]=value;
    }
}
void delete(int array[],int *n,int size){
     int maxindex=0;
    if(*n==-1){
        printf("queue is underflow\n");
      return;
    }




    else{

        for(int i=0;i<=*n;i++){
            if(array[i]>array[maxindex]){
                maxindex=i;
            }
        }
    }
printf("deleted element is:%d\n",array[maxindex]);
for(int i=maxindex;i<*n;i++){

    array[i]=array[i+1];
}
(*n)--;
}


void display(int array[],int *n,int size){



    printf("priority queue is:\n");
    for(int i=0;i<=*n;i++){
        printf("%d\n",array[i]);
    }
}
int main(){
    int size;
    
    printf("enter the maximum number of elements you want in the prioirty queue:\n");
    scanf("%d",&size);
    int array[size];
    int choice;
int n=-1;
    do{
        printf("1:creation\n");
        printf("2:insert\n");


        printf("3:delete\n");
        printf("4:display\n");
        printf("5:exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:create(array,&n,size);break;
            case 2:insert(array,&n,size);break;

            case 3:delete(array,&n,size);break;
            case 4:display(array,&n,size);break;
            case 5:printf("exit\n");break;
            default:printf("enter a valid choice\n");
        }
    }while(choice!=5);
    return 0;
}