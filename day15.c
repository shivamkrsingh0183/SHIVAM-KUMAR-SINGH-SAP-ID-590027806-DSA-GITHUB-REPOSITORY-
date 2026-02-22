// QUESTION 1 Given a matrix, calculate the sum of its primary diagonal elements. The primary diagonal consists of elements where row index equals column index.
#include<stdio.h>

int main(){
    int n1;
    printf("enter the number of rows you want in the matrix\n");
    scanf("%d",&n1);
    int n2;
    printf("enter the number of columns you want  in the matrix\n");
    scanf("%d",&n2);
    int matrix[n1][n2];


    // enter the elements of the matrix
        for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("elements of the matrix are:\n");
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            printf("%d\n",matrix[i][j]);
        }

    }
    int sum_of_elements_of_main_diagonal=0;
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(i==j){
                sum_of_elements_of_main_diagonal+=matrix[i][j];
            }
        }
    }

    printf("sum of the elements of main daigonal is:%d\n",sum_of_elements_of_main_diagonal);
    return 0;
}