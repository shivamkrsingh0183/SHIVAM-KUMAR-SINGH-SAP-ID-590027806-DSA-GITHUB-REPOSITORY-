// QUESTION 1 Write a program to find the maximum and minimum values present in a given array of integers.
#include<stdio.h>

int main(){
    int n;
    printf("enter the number of elements you want in the array\n");
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }


    int max_element=array[0];
    int min_element=array[0];
    for(int i=0;i<n;i++){
        if(array[i]>max_element){
            max_element=array[i];
        }
    }
    for(int i=0;i<n;i++){
        if(array[i]<min_element){

            array[i]=min_element;
        }
    }
    printf("maximum element in the array is:%d\n",max_element);
    printf("minimum element in the array is:%d\n",min_element);
    return 0;
}