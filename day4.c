// QUESTION 1: Given an array of n integers, reverse the array in-place using two-pointer approach.
#include<stdio.h>

int main(){
    int n;
    printf("enter the number of elements  you want in the array\n");
    scanf("%d",&n);
    int array[n];
    printf("enter the elements of the array: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }

    printf("elements of the array are:\n");
    for(int i=0;i<n;i++){
        printf("%d\n",array[i]);

    }
    // reversing an array using two poiinter approach
    for(int i=0;i<n/2;i++){
        int temp=array[i];
        array[i]=array[n-i-1];
        array[n-i-1]=temp;
    }
printf("reversed array  is:\n");
    for(int i=0;i<n;i++){
        printf("%d\n",array[i]);
    }
    return 0;
}
