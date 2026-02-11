// QUESTION1:  Write a recursive function fib(n) to compute the 1n-th Fibonacci number where fib(0)=0 and fib(1)=1.
#include<stdio.h>

int fibonacci(int n){
    if(n==0){
        return 0;
    }
    if(n==1 || n==2){
        return 1;

    }
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}
int main(){

    int n;
    printf("enter the number whose fibonacci term you want\n");
    scanf("%d",&n);
    printf("nth fibonacci term is:%d\n",fibonacci(n));
    return 0;
}
