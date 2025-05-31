#include <stdio.h>


int main () {

    float a , b;
    float *P1;
    float *P2;

    P1 = &a;
    P2 = &b;

    printf("Enter the Number A: ");
    scanf("%f" , &a);
    printf("Enter the Number B: ");
    scanf("%f" , &b);

    printf("the sum is %.2f \n" , *P1 + *P2);
    printf("the difference is %.2f\n" , *P1 - *P2);
    printf("the product is %.2f\n" , *P1 * *P2);
    printf("the divistion is %.2f" , *P1 / *P2);

     

    return 0;
}

