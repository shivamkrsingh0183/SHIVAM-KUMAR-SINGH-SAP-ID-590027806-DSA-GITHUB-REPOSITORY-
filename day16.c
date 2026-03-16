#include<stdio.h>
#include<string.h>

int main(){
    int n;
    printf("enter the number of elements you want in the array\n");
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int count;

    for(int i=0;i<n-1;i++){
     count=1;
     int already_checked_element = 0;
        for(int k=0;k<i;k++){
            if(array[i] == array[k]){
                already_checked_element = 1;
                break;
            }
        }

        if(already_checked_element)
            continue;



        for(int j=i+1;j<n;j++){
          
            if(array[i]==array[j]){
                count++;
            }
        
          



           
        }
        printf("occurrence of %d in the array is:%d\n",array[i],count);
       
    }

    return 0;
}
