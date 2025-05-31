#include <stdio.h>

void change (int *A , int *B) {
    int temp , C ;
    if (*A >=0 && *B >= 0) {
        temp = *A;
        *A = *B;
        *B = temp;
    } else if (*A < 0 || *B < 0) {
                
        C = *A;
        *A= *A + *B;
        *B= C * *B;
    }



}

int main () {
    int A , B ,C , temp; 
    int *P1 = &A;
    int *P2 = &B;

    printf("Enter The Number A: ");
    scanf("%d" ,P1);
    printf("Enter the Number B: ");
    scanf("%d", P2);

    change(P1 ,P2);

    printf("The Value of A is %d and the Value of B is %d" , *P1 , *P2);



    return 0;
}

