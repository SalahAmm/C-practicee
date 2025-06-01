#include <stdio.h>

       

int main () {

    int T[100];
    int N , X;
    int *P1 , *P2;
    int temp;
    P1 = T ;

    printf("Enter the size of the array: ");
    scanf("%d" , &N);

    printf("Enter the element in the array: \n");
    for ( P1 = T ; P1 < N + T ; P1++) {
        printf("T[%d]: ", P1 - T);
        scanf("%d" , P1);
    }

    printf("Original Array: \n");
    for ( P1 = T ; P1 < N + T ; P1++) {
        printf("|%d|", *P1);
    }

    for (P1 = T , P2 = T+N-1 ; P1 < P2 ; P1++ , P2--){
        temp = *P1;
        *P1 = *P2;
        *P2 = temp;
    }

    printf("The Reversed Array: ");
    for (P1 = T ; P1 < T + N ; P1++) {
        printf("|%d|" , *P1);
    }


    return 0;
}

