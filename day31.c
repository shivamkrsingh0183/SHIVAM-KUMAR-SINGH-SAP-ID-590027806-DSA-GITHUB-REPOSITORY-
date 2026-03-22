#include<stdio.h>
#include<stdlib.h>


void push(int stack[],int n,int *top){

    if(*top==n-1){

        printf("stack is overflow\n");
        return;
    }
    else{
        
        int value;
        printf("enter value for the stack\n");
        scanf("%d",&value);
        (*top)++;
        stack[*top]=value;
    }

}
void pop(int stack[],int *top){
    if(*top==-1){


        printf("stack is underflow nothing to pop\n");
    }
    else{
        int temp=stack[*top];
          (*top)--;
    
         printf("the deleted element is :%d\n",temp);
       
    }
}
void display(int top,int stack[]){
    if(top==-1){

        printf("stack is empty\n");
    }
    else{
    for(int i=top;i>=0;i--){


        printf("%d\n",stack[i]);
    }
}
}

void creation(int stack[],int *top,int x){
    *top=-1;
    int n;
    printf("enter the number of value you want intitally in the stack:\n");
    scanf("%d",&n);
    if(n>x){
        printf("can't enter the data more than the pre declared size of stack\n");
    }
    else{
    int value;
    for(int i=0;i<n;i++){

        printf("enter the value in the stack\n");
        scanf("%d",&value);
        (*top)++;
        stack[*top]=value;
    }
}
}

int main(){
    int n;
printf("enter the maximum number of data you want to input in the stack\n");
    scanf("%d",&n);
    int stack[n];
    int  top=-1;
    int choice;
    do{
        printf("enter your choice:\n");
        printf("1:creation\n");
        printf("2:push:\n");
        printf("3:pop\n");
        printf("4:display\n");
        printf("5:exit\n");

        scanf("%d",&choice);
    switch(choice){
        case 1: {
    creation(stack,&top,n); break;
        }
        case 2: push(stack,n,&top);break;
   case 3: pop(stack,&top);break;
case 4:display(top,stack);break;
case 5:printf("exit\n");break;
default:printf("invalid choice\n");break;
    }


    }while(choice!=5);
    return  0;
}
