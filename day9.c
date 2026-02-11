// QUESTION1 A secret system stores code names in forward order. 
// To display them in mirror format, 

// you must transform the given code name so that its characters appear in the opposite order.
#include<stdio.h>
#include<string.h>
int main(){
    int n;
    printf("enter the nummber of characters you want in the string\n");
    scanf("%d",&n);
    char secret[n];
    for(int i=0;i<n;i++){

        scanf("%c",&secret[i]);
    }


    int string_length=strlen(secret);
    for(int i=string_length-1;i>=0;i--){
        printf("%c",secret[i]);
    }
    return 0;
    
}