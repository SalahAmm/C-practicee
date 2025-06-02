#include <stdio.h>
#include <stdlib.h>

       

int main () {

  int n,i;
  int *T = calloc(n , sizeof(float));
  float S , M; 
  
  printf("Enter the size of the array: ");
  scanf("%d", &n);

  if (T == NULL) {
    printf("The memory is Full ");
    exit(0);

  }
  else {
    printf("Enter the element of the array: \n");
    for ( i = 0 ; i < n ; i++) {
        printf("T[%d]: ", i+1);
        scanf("%d", (T+i));

    }
    S = 0;
    for ( i = 0 ; i < n ; i++) {
        S = S + *(T+i);
    }
    M = S / n;
    printf("the sum of the array : [%.2f]\n" , S);
    printf("The Median of the array is : [%.2f]\n" , M);
  }

    return 0;
}

