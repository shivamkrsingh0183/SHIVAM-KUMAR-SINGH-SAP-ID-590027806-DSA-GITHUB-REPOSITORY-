// QUESTION1Write a C program to delete the element at a given 1-based position pos from an array of n integers. Shift remaining elements to the left.
#include<stdio.h>

int main(){
    int n;
    printf("enter the number of elelments you want in the array\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        }
        int pos;


        printf("enter the position from where you want to delete the element\n");
        scanf("%d",&pos);
        for(int i=n-2;i>=pos;i--){
            arr[i]=arr[i+1];
        }
        n--;
        for(int i=0;i<n;i++){
            printf("%d\n",arr[i]);

        }
        return 0;
}