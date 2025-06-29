/*
 * Author: Mariam Reda Ibrahim
 * Created on: Jun 2, 2025
 * Assignment 3 : EX_17 (Swapping two Arrays )
 *
 */
#include <stdio.h>

#define SIZE_A 10
#define SIZE_B 5

void swapping_arrays(int *arr1, int *arr2, int size_small);

int main(void) {
    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stderr, NULL, _IONBF, 0);

    int arr1[SIZE_A] = {1,2,3,4,5,6,7,8,9,10};
    int arr2[SIZE_B] = {11,12,13,14,15};

    swapping_arrays(arr1, arr2, SIZE_B);

    printf("Array A after swapping\n");
    for(int i = 0; i < SIZE_A; i++) {
        printf("%d ", arr1[i]);
    }

    printf("\nArray B after swapping\n");
    for(int i = 0; i < SIZE_B; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}

void swapping_arrays(int *arr1, int *arr2, int size_small) {
    for(int i = 0; i < size_small; i++) {
        int temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
}
