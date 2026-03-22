#include<stdio.h>
#include<stdlib.h>

struct node {
    char variable;
    int coefficient;
    int exponent;
    struct node *next;
    };

int main(){
    struct node *head=NULL;
    struct node *temp=NULL;


    int  n;
    printf("enter the number of terms of polynomial you want to input\n");
    scanf("%d",&n);
    char variable;
        int coefficient;
        int exponent;
        for(int i=0;i<n;i++){



            printf("enter the variable of the polynomial\n");
            scanf(" %c",&variable);

            printf("enter  the coefficient of the term of the polynomial\n");
            scanf("%d",&coefficient);

            printf("enter the exponent of the variable\n");
            scanf("%d",&exponent);

            struct node *newnode=(struct node*)malloc(sizeof(struct node));
            

            newnode->variable=variable;
            newnode->coefficient=coefficient;
            newnode->exponent=exponent;
            newnode->next=NULL;
            if(variable=='0'){
                exponent=0;
                newnode->variable=' ';


                newnode->coefficient=coefficient;
                newnode->exponent=0;


            }

            if(head==NULL){
                head=newnode;
                temp=newnode;

            }
            else{
                temp->next=newnode;

                temp=newnode;
            }
        } 
struct node *ptr=head;
while(ptr!=NULL){
    if(ptr->variable==' '){

        printf("%d\n",ptr->coefficient);
    }
    else{
    printf("%d %c^%d+\n",ptr->coefficient,ptr->variable,ptr->exponent);
    }
    if(ptr->next!=NULL){
        printf("+");
    }
    
    
    ptr=ptr->next;
}

return 0;
}

