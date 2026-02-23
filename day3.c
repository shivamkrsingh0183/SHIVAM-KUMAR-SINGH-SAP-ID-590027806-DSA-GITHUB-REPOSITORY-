// QUESTION1 Implement linear search to find key k in an array. Count and display the number of comparisons performed.
#include<stdio.h>

int main(){
    int n;
    printf("enter the number of elements you want in the array\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of the array: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }


    int key;
    printf("enter the number you want to search in the array\n");
    scanf("%d",&key);
    int comparison=0;
    int found=0;
printf("\n");
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            printf("element is found in the array at %d position\n",i+1);
            found=1;
            comparison++;
            break;
        }
        else{ if(arr[i]!=key){
            found--;
            comparison++;
        }
        
    }
}

if(found<0){
    printf("element is not present in the array\n");
}
    printf("number of comparison performed in the array  to find the element is:%d\n",comparison);
    return 0;
}
