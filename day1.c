// questipn 1: Write a C program to insert an element x at a given 1-based position pos in an array of n integers.
//  Shift existing elements to the right to make space.


#include<stdio.h>
int main(){
    int n;
    // printf("enter the number of elements you want in the array\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){


        scanf("%d",&arr[i]);
    }
    int pos;
    // printf("enter the position at which you want to insert the element\n");
    scanf("%d",&pos);
    int value;
    // printf("enter the value you want to insert at particular position\n");
    scanf("%d",&value);



    
    return 0;
}