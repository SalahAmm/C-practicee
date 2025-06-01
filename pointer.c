#include <stdio.h>

       

int main () {

    int A[100] , B[100];
    int N ;
    int *PA , *PB;
    int temp;
    PA = A ;

    printf("Enter the size of the array A : ");
    scanf("%d" , &N);

    printf("Enter the element in the array: \n");
    for ( PA = A ; PA < N + A ; PA++) {
        printf("A[%d]: ", PA - A);
        scanf("%d" , PA);

    }


    
    for ( PA = A ; PA < N + A-1 ; PA++) {
        for (PB =PA+1 ; PB < A + N ; PB++) {
            if ( *PA > *PB ) {
                temp = *PA;
                *PA = *PB;
                *PB = temp;
            }
        }
    } 

    printf("Array sorted from small to large:  ");
    for (PA = A ; PA < A + N ; PA++) {
        printf("|%d|" , *PA);
    }


    return 0;
}

