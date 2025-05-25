#include <iostream>
#include <vector>
#include <cmath>


int main () {
     
    char op;
    double result;
    double num1;
    double num2;

    std::cout << "*************Calculator*****************" << std::endl;
    std::cout << "Enter operator: ";
    std::cin >> op;
    std::cout << "Enter number 1 : " ;
    std::cin >> num1;
    std::cout << "Enter number 2 : ";
    std::cin >> num2;
    
        switch(op) {
            case '+':
                result = num1 + num2;
                std::cout << result;
                break;
            case '-':
                result = num1 - num2;
                std::cout << result;
                break;
            case '*':
                result = num1 * num2;
                std::cout << result;
                break;
            case '/':
                result = num1 / num2;
                std::cout << result;
                break;
            default:
                std::cout << "Enter the 4 main operator (+ - / *)";
        }

    std::cout << '\n'<< "*******************************************";
 
    
    
    
    return 0;
}