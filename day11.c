// QUESTION1 Write a program to perform addition of two matrices having the same dimensions. The sum of two matrices is obtained by adding corresponding elements of the matrices.
#include<stdio.h>

int main(){
    int n1;
    printf("enter the number of rows you want  in the both matrix\n");
    scanf("%d",&n1);
    int n2;
    printf("enter the number of  columns you want in the  both matrix\n");
    scanf("%d",&n2);
    int matrix1[n1][n2];
    int  matrix2[n1][n2];

    // number of rows and columns  in both the matrix are same(given in the question)
    // enter the elements of matrix1
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            scanf("%d",&matrix1[i][j]);
        }
    }
    // enter the elemnts of matrix 2
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            scanf("%d",&matrix2[i][j]);
        }
    }
    printf("elements if the matrix 1 are:\n");
    for(int i=0;i<n1;i++){
        for(int  j=0;j<n2;j++){
            printf("%d\n",matrix1[i][j]);

        }
    }
     printf("elements of the matrix 2 are:\n");
    for(int i=0;i<n1;i++){
        for(int  j=0;j<n2;j++){
            printf("%d\n",matrix2[i][j]);

        }
    }

    int matrix3[ n1][n2];
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){

            matrix3[i][j]=matrix1[i][j]+matrix2[i][j];
        }
    }

// sum of the elements of the both matrixes are
for(int i=0;i<n1;i++){
    for(int j=0;j<n2;j++){
        printf("%d\n",matrix3[i][j]);
    }
}
return 0;
}
