// QUESTION 1 Given an array of integers, rotate the array to the right by k positions.
#include<stdio.h>

int main(){
    int n;
    printf("enter the number of elements you want in the array\n");
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int k;


    printf("enter the number of times you want to rotata the array\n");
    scanf("%d",&k);
    int loops=0;
    while(loops<k){
    int temp=array[n-1];
    for(int i=n-2;i>=0;i--){
        array[i+1]=array[i];
    }
    array[0]=temp;
    loops=loops+1;
}
    for(int i=0;i<n;i++){
        printf("%d\n",array[i]);
    }
    return 0;
}