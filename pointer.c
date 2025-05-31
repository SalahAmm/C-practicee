#include <stdio.h>


int main () {
    int A , B ,C , temp; 
    int *P1 = &A;
    int *P2 = &B;

    printf("Enter The Number A: ");
    scanf("%d" ,P1);
    printf("Enter the Number B: ");
    scanf("%d", P2);

    if (*P1 >=0 && *P2 >= 0) {
        temp = *P1 ;
        *P1 = *P2;
        *P2 = temp;
    } else if (*P1 < 0 || *P2 < 0) {
                
        C = *P1;
        *P1 = *P1 + *P2;
        *P2 = C * *P2;
    }

    printf("The Value of A is %d and the Value of B is %d" , *P1 , *P2);



    return 0;
}

