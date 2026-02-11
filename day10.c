//QUESTION1:  Read a string and check if it is a palindrome using two-pointer comparison.
#include<stdio.h>

#include<string.h>
int main(){
    int n;
    printf("ennter the number of characters in the string\n");
    scanf("%d",&n);
    char string[n];
    for(int i=0;i<n;i++){
        scanf("%c",&string[i]);
    }


    int x=strlen(string);
    int found=0;
    for(int i=0;i<x/2;i++){
        if(string[i]==string[x-i-1]){
            found=1;
        }
        else{
            found=0;

        }
    }
    if(found==1){
        printf("the entered string is an palindrome\n");
    }
    else{
        printf("entered string is not of palindrome type\n");
    }
    return 0;
    
}