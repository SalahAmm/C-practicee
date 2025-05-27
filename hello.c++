#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>

double getTotal(double prices[], int size);

int main () {   

    double prices[] = {43 , 234 , 234 ,1213}; 
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = getTotal(prices , size);

    std::cout << "$ " << total ;



return 0;
}
    
double getTotal(double prices[], int size) {
    int total = 0;

    for (int i = 0 ; i < size ; i++) {
    total += prices[i];        
    }
    return total;
}