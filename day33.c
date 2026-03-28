#include<stdio.h>
#include<ctype.h>

#include<string.h>
void push(char x,int *top,char stack[]){
    stack[++(*top)]=x;
}

int pop(char stack[],int *top){
    return stack[(*top)--];
}



int precedence(char x){
    if(x=='+'||x=='-') return 1;
    else if(x=='*'||x=='/') return 2;
    
    else if(x=='^') return 3;
} 




int main(){
    int top=-1;
    int n;
    printf("enter the maximum number of terms in the expression\n");
    scanf("%d",&n);
    char expressions[n];
    scanf("%s",expressions);
    char result[100];
    char stack[100];
    int i=0;
    int j=0;
    while(expressions[i]!='\0'){
        if(isalnum(expressions[i])){
            result[j++]=expressions[i];
        }
        else if(expressions[i]=='('){
            push(expressions[i],&top,stack);
        }
        else if(expressions[i]==')'){
            while(stack[top]!='('){
            result[j++]=pop(stack,&top);
        }
    
        pop(stack,&top);
    }

    

    else{
        while(top!=-1 && precedence(stack[top]>=expressions[i])){
            result[j++]=pop(stack,&top);
        }
        push(expressions[i],&top,stack);

    }
    
i++;
}
while(top!=-1){
    result[j++]=pop(stack,&top);
}
result[j]='\0';

printf("postfix of expression is:%s\n",result);
return 0;
}


