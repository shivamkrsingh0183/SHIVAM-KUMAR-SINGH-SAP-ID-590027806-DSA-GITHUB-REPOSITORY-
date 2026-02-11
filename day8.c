// QUESTION1 Given integers a and b, compute a^b using recursion without using pow() function.
#include<stdio.h>

float power(int a,int b){
    if(b==0){
        return 1;
    }
    
    else{
            return a*power(a,b-1);
            b--;
    }

}
int main(){
    int a;
    printf("enter the base number to compute the power\n");
    scanf("%d",&a);
    int b;
    printf("enter the power to compute the power\n");
    scanf("%d",&b);
    printf("%f",power(a,b));

    return 0;
}