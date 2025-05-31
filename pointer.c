#include <stdio.h>

       

int main () {

    int T[100];
    int N , X;
    int *P1 , *P2;
    P1 = T ;

    printf("Enter the size of the array: ");
    scanf("%d" , &N);

    printf("Enter the element in the array: \n");
    for ( P1 = T ; P1 < N + T ; P1++) {
        printf("T[%d]: ", P1 - T);
        scanf("%d" , P1);
    }

    printf("Array without removing X: \n");
    for ( P1 = T ; P1 < N + T ; P1++) {
        printf("%d \n", *P1);
    }

    printf("Enter the Number X: \n"); 
    scanf("%d" , &X);

    printf("Array without X: \n");
    P2 = T;
    for (P1 = T ; P2 < T + N ; P1++) {
        *P2 = *P1;
        if (*P2 != X) {
            P2++;
        }
    }
    N = P2 - T ;
    for (P1 = T ; P1 < T + N ; P1++) {
        printf("%d \n" , *P1);
    }


    return 0;
}

