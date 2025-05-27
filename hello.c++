#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>

int search(int number[] , int size , int element);

int main () {   

    int number[] = {1, 2 , 3, 4};
    int size = sizeof(number)/sizeof(int);
    int index;
    int myNum;
    
    std::cout << "Enter a number to search for: ";
    std::cin >> myNum;

    index = search(number , size , myNum);

    if (index != -1) {
        std::cout << "The number at the index: " << index;

    }
    else {
        std::cout << "The number doesn't exsist !!!!";
    }
    return 0;
}
int search(int number[] , int size , int element){

    for (int i = 0 ; i < size ; i++) {
        if (number[i] == element) {
            return i;
        }

    }

    return -1;
}
    
