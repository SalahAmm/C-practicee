#include <stdio.h>

void maxu ( int *x , int *y , int *m){

    if (*x > *y) {
        *m = *x;
    }
    else {
        *m = *y;
    };

}

int main () {

int a , b , max;
    printf("Enter the value of 'a': ");
    scanf("%d" , &a);
    printf("Enter the value of 'b': ");
    scanf("%d", &b);
    
    maxu(&a ,&b ,&max);
    
    printf("The max number is: %d" , max);

    return 0;
}