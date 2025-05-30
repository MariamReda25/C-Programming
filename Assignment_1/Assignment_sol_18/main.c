/*
 * Author: Mariam Reda Ibrahim
 * Created on: May 24, 2025
 * Assignment 1 : EX_18 (Pyramid Pattern)
 *
 */
#include <stdio.h>

int main(void) {

    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stderr, NULL, _IONBF, 0);

    int i, j, height;
    printf("Enter Height of Pyramid: ");
    scanf("%d", &height);

    for (i = 1; i <= height; i++) {
        // Print spaces
        for (j = 1; j <= height - i; j++) {
            printf(" ");
        }

        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
