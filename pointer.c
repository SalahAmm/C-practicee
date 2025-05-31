#include <stdio.h>


int main () {

    int N;
    int *P = &N;
    
    printf("Enter a Number: ");
    scanf("%d" , P);

    if (*P % 2 == 0 ) {
        printf("The number is EVEN");
    }
    else {
        printf("the number is ODD");
    }
    



    return 0;
}

