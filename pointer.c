#include <stdio.h>

       

int main () {

    int A[100] , B[100];
    int N , M;
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

    PB = B;
    printf("Enter the size of the array B : ");
    scanf("%d" , &M);


    printf("Enter the element in the array B: \n");
    for ( PB = B ; PB < M + B ; PB++) {
        printf("B[%d]: ", PB - B);
        scanf("%d" , PB);
    }


    

   for ( PA = A + N , PB = B ; PB < B + M ; PB++ , PA++ ) {
    *PA = *PB;
   } 
   N = N + M;

    printf("The Merged Array: ");
    for (PA = A ; PA < A + N ; PA++) {
        printf("|%d|" , *PA);
    }


    return 0;
}

