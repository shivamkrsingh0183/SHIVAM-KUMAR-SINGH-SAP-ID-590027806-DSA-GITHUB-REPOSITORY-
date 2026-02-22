// QUESTION1 Write a program to check whether a given matrix is symmetric. A matrix is said to be symmetric if it is a square matrix and is equal to its transpose (i.e., element at position [i][j] is equal to element at position [j][i] for all valid i and j).
#include<stdio.h>

int main(){
    int n1;
    printf("enter the number of rows  and columns you want in the matrix\n");
    scanf("%d",&n1);
    int matrix[n1][n1];
    int found=0;

printf("enter the elements of the matrix\n");
    for(int i=1;i<=n1;i++){
        for(int j=1;j<=n1;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("elements of the matrix are:\n");
for(int i=1;i<=n1;i++){
    for(int j=1;j<=n1;j++){
        printf("%d\n",matrix[i][j]);
    }
}
    for(int i=1;i<=n1;i++){
        for(int j=1;j<=n1;j++){
            if(matrix[i][j]==matrix[j][i]){
            found=found+1;
        }
         else{
            found=found-1;
        }
    }

}

    if(found>0){
        printf("given matrix is a symmetric matrix\n");
    }
    else{
        printf("given matrix is not a symmetric matrix\n");
    }
    return 0;



    }

