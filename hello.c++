#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>

void sort(int array [], int size);

int main () {   
   int array[] = {4 ,2 ,12 ,43 ,23 ,10 ,543 ,2432341 ,2143242 , 1} ;
   int size = sizeof(array)/sizeof(array[0]);
   
   sort(array , size);

    for ( int element : array) {
        std::cout << element << std::endl;
    }



    return 0;
}

    
void sort(int array [], int size){
    int temp;
    for (int i = 0 ; i < size - 1 ; i++) {
        for(int j = 0 ; j < size - i - 1 ; j++) {
            if(array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
};
