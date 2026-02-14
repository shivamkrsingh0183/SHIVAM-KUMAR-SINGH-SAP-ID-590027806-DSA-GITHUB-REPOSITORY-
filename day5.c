// QUESTION 1 A system receives two separate logs of user arrival times from two different servers.
//  Each log is already sorted in ascending order.

//  Your task is to create a single chronological log that preserves the correct order of arrivals.



#include<stdio.h>
int main(){
    int n1;
    printf("enter the number of entries in server log1\n");
    scanf("%d",&n1);

    printf("enter the sorted data in arrival 2\n");
    int arrival1[n1];
    for(int i=0;i<n1;i++){
        scanf("%d",&arrival1[i]);
    }
     int n2;
    printf("enter the number of entries in server log2\n");
    scanf("%d",&n2);



    printf("enter the sorted data in arrival 2\n");
    int arrival2[n2];
    for(int j=0;j<n2;j++){
        scanf("%d",&arrival2[j]);
    }

    int merged_array[n1+n2];
    for(int i=0;i<n1+n2;i++){
        merged_array[i]=arrival1[i];
        for(int j=0;j<n2;j++){
            merged_array[j+n1]=arrival2[j];
        }
    }
    for(int k=0;k<n1+n2-1;k++){
        for(int j=k+1;j<n1+n2;j++){
            if(merged_array[j]<merged_array[k]){
                int temp=merged_array[k];
                merged_array[k]=merged_array[j];
                merged_array[j]=temp;
            }
        }
    
    }

    printf("sorted array of data of arriva1 and arrival2\n");
    for(int i=0;i<n1+n2;i++){
        printf("%d\n",merged_array[i]);
    }


    return 0;
}