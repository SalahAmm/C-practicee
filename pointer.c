#include <stdio.h>


int main () {


    int N;
    int *P = &N;
    
    printf("Enter a Number: ");
    scanf("%d" , P);
    for (int i = 1 ; i <= 18 ; i++ ) {
        if (*P % i == 0) {
            printf("%d\n", i);
        }
    }



    return 0;
}

