#include <stdio.h>

       

int main () {

    int T[100];
    int N;
    int *P;

    P = T;
    printf("Enter the size of the array: ");
    scanf("%d" , &N);

    printf("Enter the element of the array: \n");

    for (P = T ; P < N + T ; P++) {
        printf("T[%d] = " , P - T);
        scanf("%d" , P);

    }
    for (P = T ; P < N + T ; P++) {
        printf("%d", *P);

    }

    return 0;
}

