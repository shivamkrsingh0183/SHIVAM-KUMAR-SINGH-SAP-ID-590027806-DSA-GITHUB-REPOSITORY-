// QUESTION 1 Write a program to check whether a given square matrix is an Identity Matrix. An identity matrix is a square matrix in which all diagonal elements are 1 and all non-diagonal elements are 0.
#include<stdio.h>

int main(){
    int n;
    printf("enter the number of rows and columns you want in the square matrix\n");
    scanf("%d",&n);
    int matrix[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&matrix[i][j]);
        }

    }
int found=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                if(matrix[i][j]==1){
                      found=1;
                }
            }

            if(i!=j){
                if(matrix[i][j]==0){
                    found=found+1;
                }
            }
        
        }
    }
    if(found>=1){
        printf("given matrix is an identity matrix\n");
    }
    else{
        printf("given matrix is not an identity matrix\n");

    }
    return 0;
}