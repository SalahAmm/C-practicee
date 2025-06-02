#include <stdio.h>
#include <stdlib.h>

       

int main () {

    int *P1 ,*P2 , *P3;
    P1 = malloc(100);
    printf("Allocate 100 bits in %p\n" , P1);
    P2 = malloc(50);
    printf("Allocate 100 bits in %p\n" , P2);
    free(P1);
    printf("free 100 bits in %p\n" , P1);
    P3 = malloc(40);
    printf("Allocate 100 bits in %p\n" , P3);
    

    return 0;
}

