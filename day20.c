#include <stdio.h>


int count_subarray_with_sum_equals_to_zero(int arr[], int n) {
    int count = 0;

    for(int i = 0; i < n; i++) {
        int sum = 0;

        for(int j = i; j < n; j++) {
            sum += arr[j];

            if(sum == 0) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    int n;


    printf("enter the number of elements you want in the array\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Count = %d", count_subarray_with_sum_equals_to_zero(arr, n));

    return 0;
}