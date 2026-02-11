//  QUESTION1 Given a sorted array of n integers, remove duplicates in-place. Print only unique elements in order.
#include<stdio.h>

int main(){
    int n;
    printf("enter the numbers of element you want in the array\n");
    scanf("%d",&n);
    printf("please nter elements in a sorted manner\n");
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int found=0;
    for(int i=0;i<n-1;i++){
        if(arr[i+1]>arr[i]){
            found=1;
        }
        else{
            found=0;
        }
    }

    if(found==1){
        printf("array is sorted \n");
    }
    else{
        printf("array is not sorted\n");
    }
    for(int i=0;i<n-1;i++){
        for(int j=1;j<n;j++){
            if(arr[i]==arr[j]){
                arr[i]=arr[i+1];
            }
 
        }
    }
    for(int i=0;i<n-2;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}
